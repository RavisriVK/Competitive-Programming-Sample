#include<stdio.h>
int main()
{
    int n, d;
    scanf("%d %d",&n,&d);
    int ds[n];
    int sum=(n-1)*10;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ds[i]);
        sum+=ds[i];
    }
    if(sum<=d)
    {
        sum-=(n-1)*10;
        printf("%d\n",(d-sum)/5);
    }
    else
    {
        printf("-1\n");
    }
    
}