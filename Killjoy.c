#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

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
        int n, x;
        scanf("%d %d",&n,&x);
        int a[n];
        int eq=0, sd=0;
        for(int i=0; i<n; i++) {
            scanf("%d",&a[i]);
            if(a[i]==x)
                eq++;
            sd+=(a[i]-x);
        }
        if(eq==n)
            printf("0\n");
        else if(sd==0 || eq>0)
            printf("1\n");
        else 
            printf("2\n");
    }
}