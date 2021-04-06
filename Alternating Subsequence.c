#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        long long a[n];
        for(int i=0; i<n; i++)
            scanf("%lld",&a[i]);
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            int max=a[i];
            for(long long t=a[i]; i<n && a[i]*t>0; i++)
                if(max<a[i])
                    max=a[i];
            sum+=max;
            i--;
        }
        printf("%lld\n",sum);
    }
}