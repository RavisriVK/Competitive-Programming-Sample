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
        ll x;
        cin>>x;
        ll k;
        ll ans;
        for(ll i=1; true; i++) {
            k=(i*(i+1))/2;
            if(k>=x) {
                ans=i;
                break;
            }
        }
        ll d=k-x;
        //cout<<ans<<endl;
        if(d!=1) {
            cout<<ans<<endl;
            continue;
        } else {
            cout<<(ans+1)<<endl;
            continue;
        }
    }
}