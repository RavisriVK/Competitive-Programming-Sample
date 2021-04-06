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
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++)
    {
        int n, b;
        scanf("%d %d",&n,&b);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmp);
        int number=0;
        for(int i=0; i<n && b>=a[i]; i++)
        {
            b-=a[i];
            number++;
        }
        printf("Case #%d: %d\n",LAMBDA,number);
    }
}