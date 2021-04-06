#include<stdio.h>
int pro(long long n)
{
    int min=9;
    int max=0;
    for(; n>0; n/=10)
    {
        if(min>n%10) min=n%10;
        if(max<n%10) max=n%10;
    }
    return max*min;
}
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long a,k;
        scanf("%lld %lld",&a,&k);
        int temp=pro(a);
        for(long long i=1; i<k && temp!=0; i++)
        {
            a=a+temp;
            temp=pro(a);
        }
        printf("%lld\n",a);
    }
}