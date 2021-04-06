#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
list<int> a[100006];
bool visited[100006];
bool waiting[100006];
int sp[100006];

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
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    int in1, in2;
    for(int i=0; i<n-1; i++) {
        cin>>in1>>in2;
        in1--; in2--;
        a[in1].push_back(in2);
        a[in2].push_back(in1);
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++) {
        int X, Y, A, B, K;
        cin>>X>>Y>>A>>B>>K;
        int d=shortestPath(A-1, B-1);
        if(d%2==K%2 && K>=d) {
            cout<<"YES\n";
        } else {
            int d1=shortestPath(A-1, X-1);
            int d2=shortestPath(B-1, Y-1);
            int dd=1+d1+d2;
            int d3=shortestPath(A-1, Y-1);
            int d4=shortestPath(B-1, X-1);
            int ddd=1+d3+d4;
            //cout<<"#"<<dd<<" "<<ddd<<endl;
            if((dd%2==K%2 && K>=dd) || (ddd%2==K%2 && K>=ddd)) {
                cout<<"YES\n";
            } else {
                cout<<"NO\n";
            }
        }
    }
}