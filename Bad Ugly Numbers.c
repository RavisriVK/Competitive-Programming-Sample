#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        if(n==1)
        {
            printf("-1\n");
        }
        else if(n%3!=1)
        {
            for(int i=0; i<n-1; i++)
                printf("2");
            printf("3\n");
        } 
        else 
        {
            printf("2");
            for(int i=0; i<n-1; i++)
                printf("9");
            printf("\n");
        }
    }
}