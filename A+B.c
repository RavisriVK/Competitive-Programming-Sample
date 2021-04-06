#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        long long s=a+b;
        printf("%lld\n",s);
    }
}