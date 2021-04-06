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


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long n;
        scanf("%lld",&n);
        long long a[n];
        for(long long i=0; i<n; i++)
            scanf("%lld",&a[i]);
        long long min=1e10;
        long long umin[n];
        for(long long i=n-1; i>=0; i--)
        {
            umin[i]=min;
            min=MIN(min,a[i]);
        }
        int bp=0;
        for(long long i=0; i<n; i++)
        {
            if(a[i]>umin[i])
                bp++;
        }
        printf("%d\n",bp);
    }
}