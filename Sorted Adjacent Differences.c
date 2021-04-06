#include<stdio.h>
#include<stdlib.h>

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
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmp);
        int out[n];
        for(int i=n-1; i>=0; i-=2)
            out[i]=a[(n-i)/2];
        for(int i=n-2; i>=0; i-=2)
            out[i]=a[i+(n-i)/2];
        for(int i=0; i<n; i++)
            printf("%d ",out[i]);
        printf("\n");
    }
}