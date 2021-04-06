#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        if(n%4!=0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            int i;
            for(i=2; i<=n; i+=2)
                printf("%d ",i);
            for(i=1; i<n-2; i+=2)
                printf("%d ",i);
            printf("%d\n",i+n/2);
        }
        
    }
}