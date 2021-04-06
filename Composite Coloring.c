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

int GCD(int a, int b)
{
    while(b!=0)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
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
        int div[11]={2,3,5,7,11,13,17,19,23,29,31};
        int mark[11]={0};
        int col[n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<11; j++)
            {
                if(a[i]%div[j]==0)
                {
                    col[i]=j+1;
                    mark[j]=1;
                    break;
                }
            }
        }
        int colours=0;
        for(int i=0; i<11; i++)
            if(mark[i]==1)
            {
                mark[i]=++colours;
            }
        printf("%d\n",colours);
        for(int i=0; i<n; i++)
            printf("%d ",mark[col[i]-1]);
        printf("\n");
    }
}