#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long n, x;
        scanf("%lld %lld",&n,&x);
        long long max;
        scanf("%lld",&max);
        long long a[n];
        a[0]=max;
        for(int i=1; i<n; i++)
        {
            scanf("%lld",&a[i]);
            if(max<a[i])
                max=a[i];
        }
        long long moves=0;
        
        if(x%max==0)
        {
            moves=x/max;
        }
        else if(2*max>x)
        {
            int flag=2;
            for(int i=0; i<n; i++)
                if(a[i]==x)
                {
                    flag=1;
                    break;
                }
            moves=flag;
        }
        else
        {
            moves=1+x/max;
        }
        printf("%lld\n",moves);
    }
}