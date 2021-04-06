#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

typedef long long ll;

int cmp(const void *a, const void *b)
{
    return (*(ll *)a)-(*(ll *)b);
}



int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        ll n, k;
        scanf("%lld %lld",&n,&k);
        ll a[n];
        for(int i=0; i<n; i++)
            scanf("%lld",&a[i]);
        qsort(a, n, sizeof(ll), cmp);
        ll ans=0;
        ll min=a[0];
        for(ll i=1; i<n; i++) {
            ll temp=k-a[i];
            ans+=temp/min;
        }
        printf("%lld\n",ans);
    }
}