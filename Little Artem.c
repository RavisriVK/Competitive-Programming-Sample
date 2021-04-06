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
        int n,m;
        scanf("%d %d",&n,&m);
        int lim=m%2==0?m/2:1+m/2;
        for(int i=0; i<n-1; i++)
        {
            for(int i=0; i<m-1; i++)
                printf("B");
            printf("W\n");
        }
        for(int i=0; i<m; i++)
            printf("B");
        printf("\n");
    }
}