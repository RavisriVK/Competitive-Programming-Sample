#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        long long ans=k+((k-1)/(n-1));
        printf("%lld\n",ans);
    }
}