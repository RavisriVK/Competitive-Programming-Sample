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
        long long a,b,x,y,n;
        scanf("%lld %lld %lld %lld %lld",&a,&b,&x,&y,&n);
        long long min1=MAX(x,a-n);
        long long min2=MAX(y,b-n);
        if(min1<=min2)
        {
            long long moves1=MIN(n,a-x);
            long long moves2=n-moves1;
            long long lim=MAX(y,b-moves2);
            long long pro=min1*lim;
            printf("%lld\n",pro);
        }
        else
        {
            long long moves1=MIN(n,b-y);
            long long moves2=n-moves1;
            long long lim=MAX(x,a-moves2);
            long long pro=min2*lim;
            printf("%lld\n",pro);
        }
    }
}