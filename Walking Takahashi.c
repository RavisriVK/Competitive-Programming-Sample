#include<stdio.h>
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int main()
{
    long long x,k,d;
    scanf("%lld %lld %lld",&x,&k,&d);
    x=MOD(x);
    long long dif=k-x/d;
    long long dif1=x-k*d;
    double check=(((1.0)*x)/k)-((1.0)*d);
    if(check>=0)
        printf("%lld\n",dif1);
    else if(dif%2==0)
        printf("%lld\n",x%d);
    else if(dif%2==1)
        printf("%lld\n",d-(x%d));
}