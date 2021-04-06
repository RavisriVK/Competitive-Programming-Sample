#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/* int n, m;
list<int> a[200006];
bool visited[200006];
bool waiting[200006];
int sp[200006];

void shortestPathBackend(int x, int y) {
    visited[x]=true;
    waiting[x]=true;
    if(x==y) {
        sp[x]=0;
        waiting[x]=false;
        return;
    }
    int ans=INT_MAX;
    bool reachable=false;
    for(list<int>::iterator i=a[x].begin(); i!=a[x].end(); i++) {
        if(!visited[*i])
            shortestPathBackend(*i, y);
        if(!waiting[*i] && sp[*i]>=0) {
            ans=min(ans, sp[*i]);
            reachable=true;
        }
    }
    sp[x]= reachable ? (ans+1) : -1;
    waiting[x]=false;
}

int shortestPath(int x, int y) {
    memset(visited, 0, (n+1)*sizeof(bool));
    memset(waiting, 0, (n+1)*sizeof(bool));
    memset(sp, 0, (n+1)*sizeof(int));
    shortestPathBackend(x, y);
    return sp[x];
} */

int n, m;
list<int> a[200006];
int sp[200006];

void BFS(int start) {
    bool visited[n];
    memset(visited, 0, n*sizeof(bool));
    queue<int> q;
    visited[start]=true;
    q.push(start);
    sp[start]=0;
    while(!q.empty()) {
        int v=q.front();
        //cout<<v<<" ";
        q.pop();
        for(list<int>::iterator i=a[v].begin(); i!=a[v].end(); i++) {
            if(!visited[*i]) {
                visited[*i]=true;
                sp[*i]=sp[v]+1;
                q.push(*i);
            }
        }
    }
    //cout<<"\n";
}

list<int> original[200006];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    int u, v;
    for(int i=0; i<m; i++) {
        cin>>u>>v;
        a[v-1].push_back(u-1);
        original[u-1].push_back(v-1);
    }
    int k;
    cin>>k;
    int p[k];
    for(int i=0; i<k; i++) {
        cin>>p[i];
        p[i]--;
    }
    BFS(p[k-1]);
    /*for(int i=0; i<n; i++)
        cout<<sp[i]<<" ";
    cout<<endl;*/
    int a1=0, a2=0;
    for(int i=0; i<k-1; i++) {
        int t=0;
        for(list<int>::iterator it=original[p[i]].begin(); it!=original[p[i]].end(); it++) {
            if(sp[p[i]] == (sp[*it] + 1)) {
                t++;
            }
        }
        //cout<<"#"<<t<<endl;
        if(sp[p[i]] != (sp[p[i+1]] + 1)) {
            a1++; a2++; continue;
        } else if(t>1) {
            a2++;
        }
    }
    cout<<a1<<" "<<a2<<endl;
}