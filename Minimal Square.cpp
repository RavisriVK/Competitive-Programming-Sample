#include<stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int max=MAX(b,a);
        int min=MIN(b,a);
        long long side=MAX(max,2*min);
        printf("%lld\n",side*side);
    }
}