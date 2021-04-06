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
        if((a[0]+a[1])<=a[n-1])
        {
            printf("%d %d %d\n",1,2,n);
        }
        else
        {
            printf("-1\n");
        }
        
    }
}