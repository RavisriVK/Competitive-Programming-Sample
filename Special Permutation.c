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

void p4(int n)
{
    printf("%d %d %d %d ",n+1,n+3,n,n+2);
}

void p5(int n)
{
    printf("%d %d %d %d %d ",n,n+3,n+1,n+4,n+2);
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        if(n<4)
            printf("-1\n");
        else if(n==6)
            printf("5 3 6 2 4 1\n");
        else if(n==7)
            printf("5 1 3 6 2 4 7\n");
        else if(n==11)
            printf("9 7 11 8 4 1 3 5 2 6 10\n");
        else if(n%4==0)
        {
            for(int i=0; i<n/4; i++)
                p4(1+i*4);
            printf("\n");
        }
        else if(n%5==0)
        {
            for(int i=0; i<n/5; i++)
                p5(1+i*5);
            printf("\n");
        }
        else
        {
            int m=n-5*(n%4);
            int i;
            for(i=0; i<m/4; i++)
                p4(1+i*4);
            for(int j=0; j<n%4; j++)
                p5(1+i*4+j*5);
            printf("\n");
        }
    }
}