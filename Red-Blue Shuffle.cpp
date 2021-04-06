#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int TEST_CASE) 
{
    int n;
    cin>>n;
    char r[n+1];
    cin>>r;
    char b[n+1];
    cin>>b;
    int red=0, eq=0, blue=0;
    for(int i=0; i<n; i++)
        if(r[i]>b[i]) red++; else if(r[i]==b[i]) eq++; else blue++;
    if(red>blue)
        cout<<"RED\n";
    else if(red==blue)
        cout<<"EQUAL\n";
    else 
        cout<<"BLUE\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}
