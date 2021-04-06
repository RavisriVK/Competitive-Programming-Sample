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
        int n,x;
        scanf("%d %d",&n,&x);
        int a[n+1];
        a[0]=0;
        for(int i=1; i<=n; i++)
            scanf("%d",&a[i]);
        int low=0;
        qsort(a,n+1,sizeof(int),cmp);
        for(int i=1; i<=n; i++) {
            int dif=MAX(0, a[i]-a[i-1]-1);
            if(dif<=x) {
                x-=dif;
                low=a[i];
            } else {
                break;
            }
        }
        low+=x;
        printf("%d\n",low);
    }
}