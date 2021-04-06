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
        int n;
        scanf("%d",&n);
        int f[102]={0};
        int temp;
        for(int i=0; i<n; i++) {
            scanf("%d",&temp);
            f[temp]++;
        }

        if(f[0]==0) {
            printf("0\n");
            continue;
        }

        int max;
        for(max=0; f[max+1]!=0; max++) {
            f[max]--;
        }
        f[max]--;
        int ans=max+1;
        //printf("%d ",max+1);
        if(f[0]==0) {
            printf("%d\n",ans);
            continue;
        }
        for(max=0; f[max+1]!=0; max++) {
            f[max]--;
        }
    
        ans+=(max+1);
        //printf("%d ",max+1);
        printf("%d\n",ans);
    }
}