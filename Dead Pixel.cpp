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
        long long a, b, x, y;
        scanf("%lld %lld %lld %lld",&a, &b, &x, &y);
        x++; y++;
        long long a1=MAX(x-1, a-x)*b;
        long long a2=MAX(y-1, b-y)*a;
        printf("%lld\n",MAX(a1, a2));
    }
}