#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int TEST_CASE) 
{
    int n;
    cin>>n;
    int ans=0;
    if(n%2==0)
        ans+= (1+n/2)*(1+n/2);
    else 
        ans+= 2 * (1 + (n+1)/2)*(1 + (n-1)/2);
    cout<<ans;
    cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases=1;//; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}
