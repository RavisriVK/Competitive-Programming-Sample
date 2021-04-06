#include<stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
int main()
{
    int n;
    scanf("%d",&n);
    int b[n];
    for(int i=0; i<n; i++)
        scanf("%d",&b[i]);
    int a[n];
    a[0]=b[0];
    int max=a[0];
    for(int i=1; i<n; i++)
    {
        a[i]=b[i]+max;
        max=MAX(max,a[i]);
    }
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");
}