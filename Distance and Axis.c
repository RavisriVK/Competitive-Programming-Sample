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
        int n, k;
        scanf("%d %d",&n,&k);
        if(n-k<0) {
            printf("%d\n",k-n);
        } else if((n-k)%2==0) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }
}