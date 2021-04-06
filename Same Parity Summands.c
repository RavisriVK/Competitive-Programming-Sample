#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        if(n%2==1&&k%2==1&&k<=n)
        {
            printf("YES\n");
            for(int i=0; i<k-1; i++)
                printf("1 ");
            printf("%d\n",n+1-k);
        }
        else if(n%2==0&&k%2==0&&k<=n)
        {
            printf("YES\n");
            for(int i=0; i<k-1; i++)
                printf("1 ");
            printf("%d\n",n+1-k);
        }
        else if(n%2==0&&k%2==1&&(2*k)<=n)
        {
            printf("YES\n");
            for(int i=0; i<k-1; i++)
                printf("2 ");
            printf("%d\n",n+2-(2*k));
        }
        else
        {
            printf("NO\n");
        }
        
    }
}