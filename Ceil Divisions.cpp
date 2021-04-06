#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int, int> pii;

void solve(int TEST_CASE) 
{
    int n;
    cin>>n;
    vector<pii> ans;
    if(n>8) {
        for(int i=3; i<=7; i++)
            ans.push_back(pii(i, n));

        for(int i=9; i<=n-1; i++)
            ans.push_back(pii(i, n));

        int nn=n;
        while(nn>1) {
            ans.push_back(pii(n, 8));
            nn= (nn+7)/8;
        }

        ans.push_back(pii(8, 2));
        ans.push_back(pii(8, 2));
        ans.push_back(pii(8, 2));
    } else if(n==8) {
        for(int i=3; i<=7; i++)
            ans.push_back(pii(i, n));
        ans.push_back(pii(8, 2));
        ans.push_back(pii(8, 2));
        ans.push_back(pii(8, 2));
    } else {
        for(int i=3; i<n; i++)
            ans.push_back(pii(i, n));

        int nn=n;
        while(nn>1) {
            ans.push_back(pii(n, 2));
            nn= (nn+1)/2;
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}