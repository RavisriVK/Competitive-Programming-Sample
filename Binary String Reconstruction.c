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
        int n0,n1,n2;
        scanf("%d %d %d",&n0,&n1,&n2);
        if(n1>0)
        {
            int temp=n1%2==0?n1/2:1+n1/2;
            for(int i=0; i<n0; i++)
                printf("0");
            for(int i=0; i<temp; i++)
                printf("01");
            for(int i=0; i<n2; i++)
                printf("1");
            if(n1%2==0)
                printf("0");
            printf("\n");
        }
        else
        {
            if(n0>0)
                for(int i=0; i<n0+1; i++)
                    printf("0");
            else 
                for(int i=0; i<n2+1; i++)
                    printf("1");
            printf("\n");
        }
    }
}