#include<stdio.h>
#include<stdlib.h>
int cmpl(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}

int cmpg(const void *a, const void *b)
{
    return (*(int *)b)-(*(int *)a);
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n], b[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(int i=0; i<n; i++)
            scanf("%d",&b[i]);
        qsort(a,n,sizeof(int),cmpl);
        qsort(b,n,sizeof(int),cmpg);
        int replace=0;
        long long sum=0;
        int i;
        for(i=0; i<n && a[i]<b[i] && replace!=k; i++)
        {
            replace++;
            sum+=b[i];
        }
        for( ; i<n; i++)
        {
            sum+=a[i];
        }
        printf("%lld\n",sum);
        
    }
}