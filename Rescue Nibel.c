#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}

typedef long long ll;

#define MODULO 998244353
ll fact[300001];

void set() {
    fact[0]=1;
    for(ll i=1; i<=300000; i++)
        fact[i]=(fact[i-1]*i)%MODULO;
}

/*ll power(ll x, ll y) 
{ 
    ll res = 1;
    x = x % MODULO;
    while (y > 0) { 
        if (y%2==1) 
            res = (res * x) % MODULO; 
  
        y /= 2; 
        x = (x * x) % MODULO; 
    } 
    return res; 
} */

ll power(ll n, ll p) {
    ll result=1;
    ll cp=n%MODULO;
    for(ll i=0; p>0; i++) {
        if(p%2==1)
            result=(result*powers[i])%MODULO;
        p/=2;
        cp=(cp*cp)%MODULO;
    }
    return result;
}

ll modInverse(ll n) 
{ 
    return power(n, MODULO - 2); 
} 
ll ncr(ll n, ll r) 
{ 
    if (r == 0) 
        return 1; 
    if(r>n)
        return 0;

    return (fact[n] * modInverse(fact[r]) % MODULO * modInverse(fact[n - r]) % MODULO) % MODULO; 
} 


int main()
{
    int n,k;
    set();
    scanf("%d %d",&n,&k);
    int l[n], r[n];
    for(int i=0; i<n; i++)
        scanf("%d %d",&l[i], &r[i]);
    qsort(l, n, sizeof(int), cmp);
    qsort(r, n, sizeof(int), cmp);
    int i=0, j=0;
    int ans=0;
    for(i=0; i<n; i++) {
        while(j<n && r[j]<l[i])
            j++;
        int nn=i+1-j;
        ans=(ans%MODULO+ncr(nn-1, k-1)%MODULO)%MODULO;
    }
    printf("%d\n",ans);
}