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
        int h,m;
        scanf("%d %d",&h,&m);
        printf("%d\n",(60-m)+60*(23-h));
    }
}