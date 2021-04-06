#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d %d",&n,&k);
    int max;
    int t1, t2;
    scanf("%d %d",&t1,&t2);
    if(t2<=k)
        max=t1;
    else
        max=t1+k-t2;
    for(int i=1; i<n; i++)
    {
        scanf("%d %d",&t1,&t2);
        int hap;
        if(t2<=k)
            hap=t1;
        else
            hap=t1+k-t2;
        if(hap>max)
            max=hap;
    }
    printf("%d\n",max);
}