#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 998244353

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

ll power(ll x, int y)
{
    ll res = 1; 
    x = x % MOD; 
    while (y > 0) 
    {
        if (y%2==1)
            res = (res * x) % MOD;
        y = y >> 1;
        x = (x * x) % MOD;
    }
    return res;
}
 
// Returns n^(-1) mod p
ll modInverse(ll n)
{
    return power(n, MOD - 2);
}
 
// Returns nCr % p using Fermat's little theorem.
ll nCrModPFermat(ll n, int r)
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    ll fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % MOD;
    return (fac[n] * modInverse(fac[r]) % MOD * modInverse(fac[n - r]) % MOD) % MOD;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    ll a[2*n];
    for(int i=0; i<2*n; i++)
        cin>>a[i];
    sort(a, a+2*n);
    ll s=0;
    for(int i=0; i<n; i++)
        s=addMod(s, a[i+n]-a[i]);
    ll ncr=nCrModPFermat(2*n, n);
    cout<<(mulMod(s, ncr))<<"\n";
}