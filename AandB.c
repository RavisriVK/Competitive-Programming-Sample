#include<stdio.h>
int op(int a, int b)
{
    if(a==b)
        return 0;
    else
    {
        int c=a>b?a-b:b-a;
        int n;
        int i;
        for(i=n=0; n<c||n>=c&&(n-c)%2==1; i++)
        {
            n+=i;
        }
        return i-1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int out[n];
    int a, b;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        out[i]=op(a,b);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\n",out[i]);
    }
}