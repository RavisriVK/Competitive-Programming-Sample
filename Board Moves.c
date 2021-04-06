#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        unsigned long long k=n/2;
        unsigned long long moves=(4*k*(k+1)*(2*k+1))/3;
        printf("%lld\n",moves);
    }
}