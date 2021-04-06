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
        long long sr=(long long)ceil(sqrt(1.0*n));
        if(sr*(sr-1)>=n) {
            printf("%lld\n",sr+sr-3);
        } else {
            printf("%lld\n",sr+sr-2);
        }
        
    }
}