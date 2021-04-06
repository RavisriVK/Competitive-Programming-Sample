#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    int nn=0, temp;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&temp);
        if(temp<=(5-k))
            a[nn++]=temp;
    }
    printf("%d\n",nn/3);

}