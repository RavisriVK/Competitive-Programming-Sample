#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    for(int i=0; i<n; i++)
        a[i]=0;
    int p;
    scanf("%d",&p);
    int temp;
    for(int i=0; i<p; i++)
    {
        scanf("%d",&temp);
        a[temp-1]=1;
    }
    int q;
    scanf("%d",&q);
    for(int i=0; i<q; i++)
    {
        scanf("%d",&temp);
        a[temp-1]=1;
    }
    int levels=0;
    for(int i=0; i<n; i++)
        if(a[i]==1)
            levels++;
    if(levels==n)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");
}