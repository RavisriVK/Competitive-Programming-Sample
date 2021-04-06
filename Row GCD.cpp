#include<bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int a, int b) {
    int x=max(a, b), y=min(a, b);
    return y==0 ? x : gcd(y, x%y);
}

void solve(int TEST_CASE) 
{
    int n, m;
    cin>>n>>m;
    set<int> A;
    int in;
    for(int i=0; i<n; i++) {
        cin>>in;
        A.insert(in);
    }
    int b[m];
    for(int i=0; i<m; i++)
        cin>>b[i];
    int a[A.size()]; int nn=0;
    for(auto i=A.begin(); i!=A.end(); i++)
        a[nn++]=*i;
    
    int pre[A.size()];
    for(int i=1; i<A.size(); i++)
        pre[i]=a[i]-a[i-1];
    
    int g=0;
    for(int i=1; i<A.size(); i++)
        g=gcd(g, pre[i]);
    
    for(int i=0; i<m; i++) {
        int el=a[0]+b[i];
        int ans=gcd(g, el);
        cout<<ans<<" ";
    }
    cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases=1;//; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}
