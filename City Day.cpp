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

int cmp1(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}

int main()
{
    long long n, x, y;
    scanf("%lld %lld %lld",&n,&x,&y);
    long long a[n+x+y];
    for(long long i=x; i<n+x; i++) scanf("%lld",&a[i]);
    for(long long i=0; i<x; i++) a[i]=1000000000;
    for(long long i=n+x; i<n+x+y; i++) a[i]=1000000000;
    
    long long ans=-1;
    for(long long i=x; i<x+n; i++) {
        long long f=0;
        for(long long j=1; j<=x; j++) {
            if(a[i-j]<a[i]) {
                f=1; break;
            }
        }
        if(f==1) continue;
        for(long long j=1; j<=y; j++) {
            if(a[i+j]<a[i]) {
                f=1; break;
            }
        }
        if(f==1) continue;
        ans=i+1-x;
        break;
    }
    printf("%lld\n",ans);
}