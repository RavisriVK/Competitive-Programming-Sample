#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=0,y=0,z=0,a,b,c;
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0&&y==0&&z==0)
        printf("YES\n");
    else 
        printf("NO\n");
}