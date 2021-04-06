#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b)
{
    if( (((int *)a)[0])-(((int *)b)[0]) != 0 )
        return (((int *)a)[0])-(((int *)b)[0]);
    else
        return (((int *)a)[1])-(((int *)b)[1]);
}


int main()
{
    int N;
    scanf("%d",&N);
    for(int K=1; K<=N; K++)
    {
        int n, m;
        scanf("%d %d",&n, &m);
        int a[n][2];
        int in;
        for(int i=0; i<n; i++) {
            scanf("%d",&in);
            a[i][0]=(in%m==0)?(in/m):(1+in/m);
            a[i][1]=i+1;
        }
        qsort(a, n, sizeof(int[2]), cmp);
        printf("Case #%d: ",K);
        for(int i=0; i<n; i++)
            printf("%d ",a[i][1]);
        printf("\n");
    }
}