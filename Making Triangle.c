#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}

int main()
{
    int n;
    int temp=scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        temp=scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    int count=0;
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if((a[i]+a[j]>a[k])&&(a[i]!=a[j]&&a[j]!=a[k]))
                    count++;
            }
        }
    }
    printf("%d\n",count);
}