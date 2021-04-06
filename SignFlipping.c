#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        long a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%ld",&a[i]);
            a[i]=a[i]<0?(-1*a[i]):a[i];
        }
        long long pdif=a[1]-a[0];
        long long dif;
        for(int i=1; i<n-1; i++)
        {
            dif=a[i+1]-a[i];
            if(dif*pdif>0 && (a[i]+a[i+1])*pdif>=0)
            {
                a[i+1]*=-1;
            }
            else if(dif*pdif>0)
            {
                for(int j=0; j<=i-1; j++)
                    a[j]*=-1;
            }
            pdif=a[i+1]-a[i];
        }
        for(int i=0; i<n; i++)
            printf("%ld ",a[i]);
        printf("\n");
    }
}