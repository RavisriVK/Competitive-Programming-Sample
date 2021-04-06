#include<stdio.h>
#include<stdlib.h>

int cmp(const void* a, const void* b)
{
    return (*(int *)b)-(*(int *)a);
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmp);
        int tn=0;
        int teams=0;
        for(int i=0; i<n; i++)
        {
            tn++;
            if(a[i]*tn>=x)
            {
                teams++;
                tn=0;
            }
        }
        printf("%d\n",teams);
    }
}