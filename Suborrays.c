#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            printf("%d ",i+1);
        printf("\n");
    }
}