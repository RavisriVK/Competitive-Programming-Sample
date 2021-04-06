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
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        for(int i=0; i<n; i++)
        {
            printf("%c",'a'+(i%b));
        }
        printf("\n");
    }
}