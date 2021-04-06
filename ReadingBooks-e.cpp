#include<stdio.h>
#include<stdlib.h>
#define min(a,b) ((a)<(b)?(a):(b))
int cmp(const void *a, const void* b)
{
    return (*(int *)a)-(*(int *)b);
}
int main()
{
    int n, k;
    scanf("%d %d",&n,&k);
    long long a[n+1];
    long long b[n+1];
    long long ab[n+1];
    a[0]=b[0]=ab[0]=0;
    int pa=0, pb=0, pab=0;
    int t1,t2,t3;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d",&t1,&t2,&t3);
        if(t2==0&&t3==0)
            continue;
        else if(t3==1&&t2==1)
        {
            ab[pab+1]=t1;
            pab++;
        }
        else if(t2==1&&t3==0)
        {
            a[pa+1]=t1;
            pa++;
        }
        else if(t2==0&&t3==1)
        {
            b[pb+1]=t1;
            pb++;
        }
    }
    qsort(a,pa+1,sizeof(long long),cmp);
    qsort(b,pb+1,sizeof(long long),cmp);
    qsort(ab,pab+1,sizeof(long long),cmp);
    for(int i=1; i<=pa; i++)
        a[i]+=a[i-1];
    for(int i=1; i<=pb; i++)
        b[i]+=b[i-1];
    for(int i=1; i<=pab; i++)
        ab[i]+=ab[i-1];
    long long ps=a[pa]+b[pb]+ab[pab];
    //printf("%d %d %d\n",pa,pb,pab);
    /*printf("=>");
    for(int i=0; i<=pa; i++)
        printf("%lld ",a[i]);
    printf("\n=>");
    for(int i=0; i<=pb; i++)
        printf("%lld ",b[i]);
    printf("\n=>");
    for(int i=0; i<=pab; i++)
        printf("%lld ",ab[i]);
    printf("\n");*/
    if((pa+pab)<k||(pb+pab)<k)
    {
        printf("-1\n");
    }
    else
    {
        for(int i=0; i<=k&&i<=pab; i++)
        {
            if(k-i<=pa&&k-i<=pb)
                ps=min(ps,a[k-i]+b[k-i]+ab[i]);
        }
        printf("%lld\n",ps);
    }
}