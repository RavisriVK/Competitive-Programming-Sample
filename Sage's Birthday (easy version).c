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
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    qsort(a, n, sizeof(int), cmp);
    int k=(n-1)/2;
    printf("%d\n",k);
    for(int i=1; i<=k; i++) {
        printf("%d %d ",a[2*i-1], a[2*i-2]);
    }
    if(n%2==1)
        printf("%d\n", a[n-1]);
    else 
        printf("%d %d\n",a[n-2], a[n-1]);
}