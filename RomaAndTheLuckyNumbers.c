#include<stdio.h>
int luckyCount(int n)
{
    int i=0;
    while(n>0)
    {
        if(n%10==4||n%10==7)
            i++;
        n/=10;
    }
    return i;
}
int main()
{
    int n, k;
    scanf("%d %d",&n,&k);
    int lucky=0;
    int in;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&in);
        if(luckyCount(in)<=k)
            lucky++;
    }
    printf("%d\n",lucky);
}