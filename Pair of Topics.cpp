#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin>>n;
    ll t[n];
    for(ll i=0; i<n; i++)
        cin>>t[i];
    ll a[n]; ll in;
    for(ll i=0; i<n; i++) {
        cin>>in;
        a[i]=t[i]-in;
    }
    sort(a, a+n);
    ll st=0; ll last=1; ll ans=0;
    while(st<n && a[st]<0) {
        while(last<=n && (a[st]+a[n-last])>0) {
            last++;
        }
        ans+=(last-1);
        st++;
    }
    int z=st;
    while(z<n && a[z]==0)
        z++;
    ans+= (z-st)*(n-z) + (n-z)*(n-z-1)/2;
    cout<<ans<<"\n";
}