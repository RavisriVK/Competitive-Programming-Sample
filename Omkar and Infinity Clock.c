#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

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
        long long n, k;
        scanf("%lld %lld",&n, &k);
        long long a[n];
        scanf("%lld",&a[0]);
        long long max=a[0], min=a[0];
        for(long long i=1; i<n; i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]>max) max=a[i];
            if(a[i]<min) min=a[i];
        }
        long long m=max-min;
        //printf("%lld %lld %lld\n",max,min,m);
        for(long long i=0; i<n; i++)
            a[i]=max-a[i];
        long long b[n];
        for(long long i=0; i<n; i++)
            b[i]=m-a[i];
        if(k%2==1)
        {
            for(long long i=0; i<n; i++)
                printf("%lld ",a[i]);
        }
        else
        {
            for(long long i=0; i<n; i++)
                printf("%lld ",b[i]);
        }
        printf("\n");
    }
}