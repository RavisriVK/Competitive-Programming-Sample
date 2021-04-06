#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}


int main()
{
    int N;
    scanf("%d",&N);
    for(int K=1; K<=N; K++)
    {
        int n, k;
        scanf("%d %d",&n, &k);
        int a[n][2];
        int start, end;
        for(int i=0; i<n; i++) {
            scanf("%d %d",&start, &end);
            a[i][0]=start;
            a[i][1]=end;
        }
        qsort(a, n, sizeof(int[2]), cmp);
        printf("\n");
        for(int i=0; i<n; i++)
            printf("%d %d\n",a[i][0], a[i][1]);
        printf("Case #%d: ",K);
        int i=0;
        start=a[0][0];
        end=a[n-1][1];
        int deployments=0;
        while(i<n && start<end) {
            if(start<a[i][0]) {
                start=a[i][0];
            }
            start+=k;
            deployments++;
            while(start>=a[i][1])
                i++;
        }
        printf("%d\n",deployments);
    }
}