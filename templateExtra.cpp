#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

/* Sort in increasing order */
bool cmp(pair<ll, int>& a, pair<ll, int>& b) {
    return a.first<b.first;
}

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


/* Use as: int a[n][2] */
/* qsort(a, n, sizeof(int[2]), cmp); */
int cmp1(const void *a, const void *b)
{
    if( (((int *)a)[0])-(((int *)b)[0]) != 0 )
        return (((int *)a)[0])-(((int *)b)[0]);
    else
        return (((int *)a)[1])-(((int *)b)[1]);
}

int cmp(const void *a, const void *b)
{
    return ((*(int *)a))-((*(int *)b));
}

bool isPrime[1000001];
int cntPrimes[1000001];

void generatePrimes()
{
    memset(isPrime+2, true, 999999);
    for(int k=2; k*k<=1000000; k++) 
    {
        if(isPrime[k]==false) continue;
        for(int i=k*k; i<=1000000; i+=k)
            isPrime[i]=false;
    }
    for(int i=2; i<=1000000; i++)
        cntPrimes[i]=cntPrimes[i-1]+(isPrime[i]);
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        ll n;
        cin>>n;

    }
}
