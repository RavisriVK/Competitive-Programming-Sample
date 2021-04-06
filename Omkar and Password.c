#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

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
        scanf("%d",&a[0]);
        int flag=0;
        for(int i=1; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]!=a[0])
                flag=1;
        }
        if(flag==1)
            printf("%d\n",1);
        else 
            printf("%d\n",n);
    }
}