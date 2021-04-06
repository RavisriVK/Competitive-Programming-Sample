#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}


int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int covered[1000000]={0};
    int b[n];
    for(int i=0; i<n; i++)
        b[i]=-1;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        covered[a[i]]=1;
        if(i>0&&a[i-1]!=a[i])
            b[i]=a[i-1];
    }
    int alp=0;
    for(int i=0; i<1000000 && alp<n; i++)
    {
        while(alp<n&&b[alp]>=0)
            alp++;
        while(i<1000000 && covered[i]==1)
            i++;
        b[alp]=i;
    }
    for(int i=0; i<n; i++)
        printf("%d ",b[i]);
    printf("\n");
}