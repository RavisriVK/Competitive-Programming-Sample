#include<bits/stdc++.h>
using namespace std;
#define int long long

map<int, int> ans;

void solve(int TEST_CASE) 
{
    int n;
    cin>>n;
    ans.clear();
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int p=1;
    for(int i=1; i<n; i++) {
        if(a[i]!=a[i-1]) {
            a[p++]=a[i];
            ans[a[i]];
        }
    }
    if(p==1) {
        cout<<"0\n";
        return;
    }
    ans[a[0]];
    for(int i=0; i<p; i++) {
        if(i!=0 && i!=p-1) {
            ans[a[i]]++;
        }
    }
    int m=2000000000;
    for(auto i=ans.begin(); i!=ans.end(); i++)
        m=min(m, i->second);
    cout<<(m+1)<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}