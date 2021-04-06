#include<stdio.h>
#define mod(a) ((a)<0?((-1)*(a)):(a))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        int p1,p2;
        for(p1=0; a>0 && a%2==0; a/=2)
            p1++;
        for(p2=0; b>0 && b%2==0; b/=2)
            p2++;
        if(a!=b)
            printf("-1\n");
        else 
        {
            int pdif=mod(p1-p2);
            printf("%d\n",pdif/3+(pdif%3!=0));
        }
    }
}