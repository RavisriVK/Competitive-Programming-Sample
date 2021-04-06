#include<stdio.h>

/*long long dif(long long a, long long b)
{
    long long d=0;
    long long n;
    for(n=a^b; n>0; n/=2)
        d+=n%2;
    return d;
}*/

long long dif(long long a, long long b)
{
    long long d=0;
    long long n;
    for(n=a^b; n; d++)
        n&=(n-1);
    return d;
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long n;
        scanf("%lld",&n);
        long long d=0;
        for(int i=1; i<=n; i++)
            d+=dif(i-1,i);
        printf("%lld\n",d);
    }
}