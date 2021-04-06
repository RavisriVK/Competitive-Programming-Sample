#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int temp;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&temp);
        a[temp-1]=i+1;
    }
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");
}