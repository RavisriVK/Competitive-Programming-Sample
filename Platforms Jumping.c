#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}


int main()
{
    int n,m,d;
    scanf("%d %d %d",&n,&m,&d);
    int c[m];
    for(int i=0; i<m; i++)
        scanf("%d",&c[i]);

    int p[m];
    int current=0;
    for(int i=0; i<m; i++)
    {
        p[i]=current+d;
        current=p[i]+c[i]-1;
    }

    current+=d;
    if(current>=(n+1))
        printf("YES\n");
    else 
    {
        printf("NO\n");
        return 0;
    }
    while((p[m-1]+c[m-1]-1)>n)
    {
        /*for(int i=0; i<m; i++)
            printf("%d ",p[i]);
        printf("\n");*/
        if(p[0]>1)
            p[0]--;
        for(int i=1; i<m; i++)
            if(p[i]>(p[i-1]+c[i-1]))
                p[i]--;
        /*for(int i=0; i<m; i++)
            printf("%d ",p[i]);
        printf("\n");*/
    }
    int ans[n];
    for(int i=0; i<n; i++)
        ans[i]=0;
    for(int i=0; i<m; i++)
    {
        for(int j=(p[i]-1); j<(p[i]+c[i]-1); j++)
            ans[j]=(1+i);
    }
    for(int i=0; i<n; i++)
        printf("%d ",ans[i]);
    printf("\n");
}