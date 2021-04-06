#include<stdio.h>

int find(int a[], int n, int element)
{
    for(int i=0; i<n; i++)
        if(a[i]==element)
            return 1;
    return 0;
}

void print(int a[], int n, int k)
{
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
    for(int i=0; i<k-n; i++)
        printf("%d ",a[0]);
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n];
        int distinct=0;
        int temp;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&temp);
            if(find(a,distinct,temp)==0)
                a[distinct++]=temp;
        }
        if(distinct>k)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",k*n);
            for(int i=0; i<n; i++)
                print(a,distinct,k);
            printf("\n");
        }
        
    }
}