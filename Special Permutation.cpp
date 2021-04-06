#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int TEST_CASE) 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        a[i]=n-i;
    if(n%2==1)
    swap(a[n/2], a[0]);
    for(int i=0; i<n; i++)
        cout<<a[i]<< " ";
    cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}