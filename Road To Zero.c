#include<stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long x,y;
        scanf("%lld %lld",&x,&y);
        long long a,b;
        scanf("%lld %lld",&a,&b);
        if(2*a<=b) printf("%lld\n",((x+y)*a));
        else
        {
            long long min=MIN(x,y);
            printf("%lld\n",((x+y-2*min)*a+min*b));
        }
        
    }
}