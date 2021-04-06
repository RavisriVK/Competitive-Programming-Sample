#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c,d;
    int out[n][3];
    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        out[i][0]=b;
        out[i][1]=(out[i][2]=c);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d %d %d\n", out[i][0], out[i][1], out[i][2]);
    }
}