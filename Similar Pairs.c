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
        int even=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0) even++;
        }
        if(even%2==0)
        {
            printf("YES\n");
        }
        else
        {
            qsort(a,n,sizeof(int),cmp);
            int flag=0;
            for(int i=0; i<n-1;i++)
                if((a[i]+1)==a[i+1])
                {
                    flag=1;
                    break;
                }
            if(flag==1)
                printf("YES\n");
            else 
                printf("NO\n");
        }
    }
}