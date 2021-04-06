#include<stdio.h>
void best(int x, int m, int n)
{
    while(x>=19&&m>0)
    {
        x=x/2+10;
        m--;
    }
    while(x>0&&n>0)
    {
        x-=10;
        n--;
    }
    if(x<=0)
        printf("YES\n");
    else
        printf("NO\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    int in[n][3];
    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d",&in[i][0],&in[i][1],&in[i][2]);
    }
    for(int i=0; i<n; i++)
    {
        best(in[i][0], in[i][1], in[i][2]);
    }
}