#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long n;
        scanf("%lld",&n);
        printf("%d\n",1+n/2);
    }
}