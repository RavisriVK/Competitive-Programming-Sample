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
    long long N;
    scanf("%lld",&N);
    while(N--)
    {
        long long n;
        scanf("%lld",&n);
        long long a[n];
        for(long long i=0; i<n; i++)
            scanf("%lld",&a[i]);
        long long bank=0;
        for(long long i=n-1; i>=0; i--) {
            if(a[i]<0) {
                bank+=((-1)*a[i]);
            } else {
                bank-=(MIN(a[i],bank));
            }
            //printf("%d\n",bank);
        }
        printf("%lld\n",bank);
    }
}