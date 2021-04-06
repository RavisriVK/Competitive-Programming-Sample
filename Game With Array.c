#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}


int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    if(n<((k+1)/2))
    {
        printf("YES\n");
        for(int i=0; i<n-1; i++)
            printf("1 ");
        printf("%d\n%d\n",k+1-n,k-n);
    }
    else if(2*n<=k && k%2==0)
    {
        printf("YES\n");
        for(int i=0; i<n-1; i++)
            printf("2 ");
        printf("%d\n1\n",k-2*(n-1));
    }
    else
        printf("NO\n");
}