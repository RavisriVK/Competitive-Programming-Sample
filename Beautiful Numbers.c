#include<stdio.h>
#include<stdlib.h>
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
typedef struct {
    int num;
    int pos;
} element;
int cmp(const void* a, const void* b)
{
    return (((element *)a)->num)-(((element *)b)->num);
}
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        element a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i].num);
            a[i].pos=i;
        }
        qsort(a,n,sizeof(element),cmp);
        for(int i=1; i<=n; i++)
        {
            int minPos=min(a[i-1].pos,a[0].pos);
            int maxPos=max(a[i-1].pos,a[0].pos);
            printf("<%d-%d,%d>",minPos,maxPos,maxPos-minPos+1);
            int j;
            for(j=1; j<=i && a[j-1].pos>=minPos&&a[j-1].pos<=maxPos; j++)
                ;
            if(j>i&&((maxPos-minPos)==i-1))
                printf("1");
            else 
                printf("0");
        }
        printf("\n");
    }
}