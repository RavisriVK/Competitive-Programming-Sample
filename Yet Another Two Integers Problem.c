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
        long long a,b;
        scanf("%lld %lld",&a,&b);
        long long max, min;
        if(a<=b)
        {
            max=b;
            min=a;
        }
        else
        {
            max=a;
            min=b;
        }
        long long moves=(max-min)/10;
        if((max-min)%10!=0)
            moves++;
        printf("%lld\n",moves);
    }
}