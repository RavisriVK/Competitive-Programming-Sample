#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007
ll addMod(ll a, ll b);
ll mulMod(ll a, ll b);
ll powMod(ll a, ll b);

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, x, pos;
    cin>>n>>x>>pos;
    ll g=0, l=0;
    ll left=0, right=n;
    while(left<right) {
        ll middle=(left+right)/2;
        if(pos<middle) {
            g++;
            right=middle;
        } else if(pos==middle) {
            left=middle+1;
        } else {
            l++;
            left=middle+1;
        }
    }
    ll ans=1;
    if(l>=x || g>(n-x)) {
        cout<<"0\n";
        return 0;
    }
    if(g>0) {
        for(ll i=0; i<g; i++) {
            ans=mulMod(ans, (n+1+i-x-g));
        }
    }
    if(l>0) {
        for(ll i=0; i<l; i++) {
            ans=mulMod(ans, (x+i-l));
        }
    }
    for(int i=1; i<=(n-l-g-1); i++)
        ans=mulMod(ans, i);
    cout<<ans<<"\n";
}

ll addMod(ll a, ll b) {
    a%=MOD; b%=MOD;
    return (a+b)%MOD;
}
ll mulMod(ll a, ll b) {
    a%=MOD; b%=MOD;
    return (a*b)%MOD;
}
ll powMod(ll a, ll b) {
    ll result=1; a%=MOD;
    while(b) {   if(b%2==1)  result*=a;     a*=a;     a%=MOD;     result%=MOD;    b/=2; }
    if(result<0) result+=MOD;
    return result;
}

