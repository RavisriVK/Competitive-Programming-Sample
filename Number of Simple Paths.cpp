#include<bits/stdc++.h>
using namespace std;
#define int long long

int n;
bool visited[200001];
set<int> a[200001];
vector<int> cycle;
int nv;

bool dfs(int v, int p) {
    visited[v]=true;
    cycle.push_back(v);
    for(set<int>::iterator i=a[v].begin(); i!=a[v].end(); i++) {
        if(!visited[*i]) {
            if(dfs(*i, v))
                return true;
        } else if(*i != p ) {
            int st=*i;
            while(!cycle.empty() && *cycle.begin()!=st)
                cycle.erase(cycle.begin());
            return true;
        }
    }
    cycle.pop_back();
    return false;
}

void DFS() {
    cycle.clear();
    memset(visited, 0, sizeof(bool)*n);
    dfs(0, -1);
}

void dfs1(int v) {
    visited[v]=true;
    nv++;
    for(set<int>::iterator i=a[v].begin(); i!=a[v].end(); i++) {
        if(!visited[*i])
            dfs1(*i);
    }
}

void solve(int TEST_CASE) 
{
    cin>>n;
    for(int i=0; i<n; i++)
        a[i].clear();
    int in1, in2;
    for(int i=0; i<n; i++) {
        cin>>in1>>in2; in1--; in2--;
        a[in1].insert(in2);
        a[in2].insert(in1);
    }
    DFS();
    memset(visited, 0, sizeof(bool)*n);
    set<int> c;
    for(vector<int>::iterator i=cycle.begin(); i!=cycle.end(); i++)
        c.insert(*i);
    int cs=cycle.size();
    int ans=0;
    // cout<<cycle.size()<<endl;
    for(vector<int>::iterator i=cycle.begin(); i!=cycle.end(); i++) {
        int t=1;
        while(!a[*i].empty()) {
            set<int>::iterator j=a[*i].begin();
            a[*i].erase(*j);
            a[*j].erase(*i);
            if(c.find(*j)==c.end()) {
                nv=0;
                dfs1(*j);
                t+=nv;
            }
        }
        // cout<<*i<<" "<<t<<endl;
        ans+= t*(t-1)/2;
        ans+= t*(n-t);
    }
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}