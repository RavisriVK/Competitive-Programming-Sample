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


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long n;
        scanf("%lld",&n);
        long long a[n];
        long long in;
        for(int i=0; i<n; i++) {
            scanf("%lld",&in);
            a[i]=(long long)floor(log2(1.0*in));
        }
        qsort(a, n, sizeof(long long), cmp);
        long long ans=0;
        for(long long i=0; i<n; ) {
            long long element=a[i];
            long long cnt=1;
            for(i++; i<n && a[i]==element; i++) {
                cnt++;
            }
            ans+=((cnt)*(cnt-1))/2;
        }
        printf("%lld\n",ans);
    }
}