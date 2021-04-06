#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int TEST_CASE) 
{
    int n;
    cin>>n;
    int r[n+1];
    int p1[n+1]; p1[0]=0;
    int a1=0;
    for(int i=1; i<=n; i++) {
        cin>>r[i];
        p1[i]=p1[i-1]+r[i];
        a1=max(a1, p1[i]);
    }
    int m;
    cin>>m;
    int b[m+1];
    int p2[m+1]; p2[0]=0;
    int a2=0;
    for(int i=1; i<=m; i++) {
        cin>>b[i];
        p2[i]=p2[i-1]+b[i];
        a2=max(a2, p2[i]);
    }
    int ans=a1+a2;
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}
