#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}


int main()
{
    long long n;
    scanf("%lld",&n);
    long long a[n];
    for(long long i=0; i<n; i++)
        scanf("%lld",&a[i]);
    if(n>1)
    {
        printf("1 %lld\n",n-1);
        for(long long i=0; i<n-1; i++)
        {
            long long temp=a[i]*(n-1);
            printf("%lld ",temp);
            a[i]*=n;
        }
        printf("\n%lld %lld\n%lld\n1 %lld\n",n,n,a[n-1]*(n-1),n);
        a[n-1]*=n;
        for(long long i=0; i<n; i++)
        {
            long long temp=(-1)*a[i];
            printf("%lld ",temp);
        }
        printf("\n");
    }
    else
    {
        printf("1 1\n0\n1 1\n0\n1 1\n%lld\n",(-1)*a[0]);
    }
}