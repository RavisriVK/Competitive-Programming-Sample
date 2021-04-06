#include<iostream>
#define ceil(a,b) ((a)%(b)==0?((a)/(b)):(1+(a)/(b)))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long a,b,c,d;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        if(b>=a)
        {
            printf("%lld\n",b);
        }
        else if(c<=d)
        {
            printf("%d\n",-1);
        }
        else
        {
            printf("%lld\n",b+ceil(a-b,c-d)*c);
        }
        
    }
}