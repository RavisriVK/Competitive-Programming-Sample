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
        int dist[300001]={0};
        int last[300001]={0};
        int n;
        scanf("%d",&n);
        int a[n+1];
        for(int i=1; i<=n; i++) {
            scanf("%d",&a[i]);
            dist[a[i]]=MAX(dist[a[i]], i-last[a[i]]);
            last[a[i]]=i;
        }
        for(int i=1; i<=n; i++) {
            dist[i]=MAX(dist[i], n+1-last[i]);
        }
        int cnt=n;
        int ans[n+1];
        for(int i=1; i<=n; i++) {
            while(dist[i]<=cnt) {
                ans[cnt]=i;
                cnt--;
            }
        }
        while(cnt>0) {
            ans[cnt]=-1;
            cnt--;
        }
        for(int i=1; i<=n; i++) {
            printf("%d ",ans[i]);
        }
        printf("\n");
    }
}
