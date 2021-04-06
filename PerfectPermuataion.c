#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        for(int i=0; i<n; i+=2)
            printf("%d %d ",i+2,i+1);
        printf("\n");
    }
    else
    {
        printf("-1\n");
    }
    
}