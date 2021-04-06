#include<stdio.h>
#include<stdlib.h>
#define MIN(a,b) ((a)<(b)?(a):(b))

int cmp(const void* a, const void* b)
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
        int dif[n-1];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmp);
        for(int i=1; i<n; i++)
            dif[i-1]=a[i]-a[i-1];
        qsort(dif,n-1,sizeof(int),cmp);
        printf("%d\n",dif[0]);
    }
}