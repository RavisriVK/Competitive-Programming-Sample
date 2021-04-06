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


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int l[n];
        int ul[n]; int up=0;
        for(int i=0; i<n; i++) {
            scanf("%d",&l[i]);
            if(l[i]==0) {
                ul[up]=a[i];
                up++;
            }
        }
        qsort(ul, up, sizeof(int), cmp);
        int p=0;
        for(int i=0; i<n; i++) {
            if(l[i]==1)
                printf("%d ",a[i]);
            else {
                printf("%d ",ul[p]);
                p++;
            }
        }
        printf("\n");
    }
}