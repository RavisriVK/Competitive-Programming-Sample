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

void mp(int *a, int n, int op)
{
    if(op<=0 || n<=1)
        return;

    /*for(int i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");*/

    int min=0;
    for(int i=1; i<n; i++)
        if(a[i]<a[min])
            min=i;
    int temp=a[min];
    
    for(int i=min-1; i>=0; i--)
        a[i+1]=a[i];
    a[0]=temp; 

    /*for(int i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");*/

    if(min>0)
        mp(a+min, n-min, op-min);
    else 
        mp(a+1, n-1, op);
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        mp(a,n,n-1);
        for(int i=0; i<n; i++)
            printf("%d ",a[i]);
        printf("\n");
    }
}