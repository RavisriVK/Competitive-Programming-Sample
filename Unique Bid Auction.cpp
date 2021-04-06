#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int TEST_CASE) 
{
    int n;
    cin>>n;
    pair<int, int> a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a, a+n);
    for(int i=0; i<n; i++) {
        if(i>=n-1 || a[i].first!=a[i+1].first) {
            cout<<a[i].second<<endl;
            return;
        } else {
            int el=a[i].first;
            for(i++; i<n && a[i].first==el; i++)
                ;
            i--;
        }
    }
    cout<<"-1\n";
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}