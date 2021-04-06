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
        ll n;
        cin>>n;
        ll a[n+1];
        for(ll i=0; i<n; i++)
            cin>>a[n-i];
        ll b[n+1];
        b[1]=a[1];
        ll ans=0;
        for(ll i=2; i<=n; i++) {
            b[i]=a[i]-a[i-1];
            b[1]+=b[i];
            ans+=abs(b[i]);
        }
        ll dec=abs(a[2]-a[1]);
        if(abs(a[n]-a[n-1])>dec) {
            dec=abs(a[n]-a[n-1]);
        }
        for(ll i=2; i<=n-1; i++) {
            ll mid=(a[i-1]+a[i+1])/2;
            ll val = (abs(a[i]-a[i-1]) + abs(a[i+1]-a[i])) - (abs(mid-a[i-1]) + abs(a[i+1]-mid));
            if( val>dec ) {
                dec=val; 
            }
        }
        ans-=dec;
        cout<<ans<<endl;
    }
}