#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b)
{
    return (*(int *)b)-(*(int *)a);
}

int cmp1(const void *a, const void *b)
{
    return (((int *)b)[0])-(((int *)a)[0]);
}

int cmp2(const void *a, const void *b)
{
    return (((int *)a)[1])-(((int *)b)[1]);
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[n][3];
        int b[n];
        int f[2*n];
        for(int i=0; i<2*n; i++)
            f[i]=0;
        for(int i=0; i<n; i++) {
            scanf("%d",&a[i][0]);
            a[i][1]=i+1;
            b[i]=a[i][0];
            f[a[i][0]-1]=1;
        }
        int flag=0;
        qsort(a, n, sizeof(int[3]), cmp1);
        for(int i=0; i<n; i++) {
            if(((2*n)-a[i][0])<=(2*i)) {
                flag=1; break;
            }
        }
        if(flag==1) {
            printf("-1\n");
            continue;
        }
        qsort(a, n, sizeof(int[3]), cmp2);
        for(int i=0; i<n; i++) {
            int p=2*n-1;
            while(f[p]==1 || (p+1)>a[i][0]) p--;
            while(f[p]==1 || (p+1)<a[i][0]) p++;
            f[p]=1;
            a[i][2]=p+1;
        }
        for(int i=0; i<n; i++)
            printf("%d %d ",a[i][0], a[i][2]);
        printf("\n");
    }
}