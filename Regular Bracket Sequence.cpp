#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int TEST_CASE) 
{
    char s[101];
    cin>>s;
    int n=strlen(s);
    int p1, p2;
    for(int i=0; i<n; i++) {
        if(s[i]=='(') p1=i;
        if(s[i]==')') p2=i;
    }
    if(n%2!=0) {
        cout<<"NO\n";
        return;
    }
    if(p1<p2) {
        cout<<"YES\n";
        return;
    }
    if(p1!=(n-1) && p2!=0) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}
