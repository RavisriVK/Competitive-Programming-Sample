#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

#define MOD 998244353
ll addMod(ll a, ll b);
ll mulMod(ll a, ll b);
ll powMod(ll a, ll b);

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll w, h;
    cin>>w>>h;
    ll s=w+h;
    ll p=1;
    for(ll i=1; i<=s; i++)
        p=mulMod(p, 2);
    cout<<p<<"\n";
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