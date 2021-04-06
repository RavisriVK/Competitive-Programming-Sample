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
    int n;
    scanf("%d",&n);
    printf("%d\n",8+7*n);
    int y=0;
    printf("%d %d\n",y,y);
    printf("%d %d\n",y+1,y);
    printf("%d %d\n",y+2,y);
    printf("%d %d\n",y+2,y+1);
    printf("%d %d\n",y+2,y+2);
    printf("%d %d\n",y+1,y+2);
    printf("%d %d\n",y,y+2);
    printf("%d %d\n",y,y+1);
    for(int i=0; i<n; i++)
    {
        y+=2;
        printf("%d %d\n",y+1,y);
        printf("%d %d\n",y+2,y);
        printf("%d %d\n",y+2,y+1);
        printf("%d %d\n",y+2,y+2);
        printf("%d %d\n",y+1,y+2);
        printf("%d %d\n",y,y+2);
        printf("%d %d\n",y,y+1);
    }
}