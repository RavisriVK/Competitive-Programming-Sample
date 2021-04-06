#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long n,g,b;
        scanf("%lld %lld %lld",&n,&g,&b);
        long long half=n%2==0?n/2:1+n/2;
        long long ohalf=n-half;
        long long gp=half%g==0?half/g:1+half/g;
        long long pcb=gp-1;
        long long bdays=b*pcb;
        if(ohalf<=bdays)
        {
            long long ans=half+b*pcb;
            printf("%lld\n",ans);
        }
        else
        {
            printf("%lld\n",n);
        }
        
    }
}