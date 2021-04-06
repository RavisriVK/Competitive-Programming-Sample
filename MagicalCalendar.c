#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    long long out[N];
    for(int k=0; k<N; k++)
    {
        long long n, r;
        scanf("%lld %lld",&n,&r);
        if(n>r)
        {
            out[k]=(r*(r+1))/2;
        }
        else
        {
            long long temp=n;
            out[k]=((temp*(temp-1))/2)+1;
        }
    }
    for(int k=0; k<N; k++)
    {
        printf("%lld\n",out[k]);
    }
}