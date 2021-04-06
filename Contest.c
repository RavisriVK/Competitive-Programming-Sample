#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int m=max(3*a/10,a-a*c/250);
    int v=max(3*b/10,b-b*d/250);
    if(m>v)
        printf("Misha\n",3*a/10,a-a*c/250);
    else if(m<v)
        printf("Vasya\n");
    else 
        printf("Tie\n");
}