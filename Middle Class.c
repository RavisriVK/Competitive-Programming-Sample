#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a, const void* b)
{
    return (*((int *)a))-(*((int *)b));
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n, x;
        scanf("%d %d",&n,&x);
        int a[n];
        int b[n];
        long long excess=0;
        int poor=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=x)
                excess+=a[i]-x;
            else
            {
                b[poor]=a[i];
                poor++;
            }
        }
        qsort(b,poor,sizeof(int),cmp);
        
        int rich=n-poor;
        for(int i=poor-1; i>=0 && (x-b[i])<=excess; i--)
        {
            rich++;
            excess-=x-b[i];
        }
        printf("%d\n",rich);
    }
}
