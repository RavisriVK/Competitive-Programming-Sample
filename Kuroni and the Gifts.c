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
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int b[n];
        for(int i=0; i<n; i++)
            scanf("%d",&b[i]);
        qsort(a,n,sizeof(int),cmp);
        qsort(b,n,sizeof(int), cmp);
        for(int i=0; i<n; i++)
            printf("%d ",a[i]);
        printf("\n");
        for(int i=0; i<n; i++)
            printf("%d ",b[i]);
        printf("\n");
    }
}