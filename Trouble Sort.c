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


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int z,o;
        int flag=1;
        scanf("%d",&z);
        for(int i=1; i<n; i++)
        {
            scanf("%d",&o);
            if(o<z)
                flag=0;
            z=o;
        }
        int a[n];
        scanf("%d",&a[0]);
        for(int i=1; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]!=a[0])
                flag=1;
        }
        if(flag==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        

    }
}