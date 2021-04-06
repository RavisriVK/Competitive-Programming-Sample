#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b)
{
    return (*(long long *)a)-(*(long long *)b);
}

int cmp1(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}

int main()
{
    long long n, I;
    scanf("%lld %lld",&n,&I);
    I*=8;
    long long a[n];
    for(int i=0; i<n; i++)
        scanf("%lld",&a[i]);
    
    if((I/n)>20) {
        printf("0\n");
        return 0;
    }

    qsort(a, n, sizeof(long long), cmp);
    long long cnt[n];
    long long d=0;
    for(long long i=0; i<n; i++) {
        long long element=a[i];
        cnt[d]=0;
        for( ; i<n && a[i]==element; i++)
            cnt[d]++;
        i--;
        d++;
    }

    long long k=I/n;
    long long K= 1<<k;

    if(d<=K) {
        printf("0\n");
        return 0;
    }

    long long a1[d+1], a2[d+1]; a1[0]=0; a2[0]=0;
    for(long long i=1; i<=d; i++) a2[i]=a2[i-1]+cnt[d-i];
    for(long long i=1; i<=d; i++) a1[i]=a1[i-1]+cnt[i-1];

    long long i=0, j=d-1;
    long long reach=d-K;
    long long moves=2147483647;
    for(long long i=0; i<=reach; i++) {
        moves=MIN(moves, a1[i] + a2[reach-i]);
    }
    
    printf("%lld\n",moves);
}