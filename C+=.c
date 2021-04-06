#include<stdio.h>

long long ans(long long a, long long b, long long n)
{
    if(a>n||b>n)
        return 0;
    else if(a>b)
        return 1+ans(a,a+b,n);
    else 
        return 1+ans(a+b,b,n);
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long a,b,n;
        scanf("%lld %lld %lld",&a,&b,&n);
        printf("%lld\n",ans(a,b,n));
    }
}