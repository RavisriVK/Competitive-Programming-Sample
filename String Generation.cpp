#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int TEST_CASE) 
{
    int n, k;
    cin>>n>>k;
    char s[n+1];
    for(int i=0; i<k; i++)
        s[i]='a';
    int st='b';
    for(int i=k; i<n; i+=k) {
        for(int j=0; j<k && (i+j)<n; j++) {
            s[(i+j)]=st;
        }
        if(st!='c') st++; else st='a';
    }
    s[n]='\0';
    cout<<s<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}