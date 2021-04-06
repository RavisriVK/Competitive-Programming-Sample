#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    int cp=0;
    int cn=0;
    int in;
    for(int i=1;i<=n; i++)
    {
        scanf("%d",&in);
        if(in>0)
            cp++;
        else 
            cn++;
    }
    for(int i=0; i<m; i++)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        int num=r-l+1;
        if(num%2==0&&num/2<=cp&&num/2<=cn)
            printf("1\n",num,cp,cn);
        else
            printf("0\n",num,cp,cn);
    }
}