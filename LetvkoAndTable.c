#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
            printf("0 ");
        printf("%d ",k);
        for(int j=i+1; j<n; j++)
            printf("0 ");
        printf("\n");
    }
}