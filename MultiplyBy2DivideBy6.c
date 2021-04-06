#include<stdio.h>
int po(int x)
{
    int n2=0;
    int p2=1;
    int n=x;
    while(n%2==0)
    {
        n2++;
        n/=2;
        p2*=2;
    }
    int n3=0;
    int p3=1;
    n=x;
    while(n%3==0)
    {
        n3++;
        n/=3;
        p3*=3;
    }
    if((x/(p2*p3))==1&&n3>=n2)
    {
        return 2*n3-n2;
    }
    return -1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int out[n];
    int x;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        out[i]=po(x);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\n",out[i]);
    }
}