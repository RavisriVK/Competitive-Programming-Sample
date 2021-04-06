#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        ll n, k;
        cin>>n>>k;
        ll ans=n - (k-1)*(k-1);
        if(ans>(2*k-3) && ans%2==1) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
}