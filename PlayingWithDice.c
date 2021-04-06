#include<stdio.h>
#define mod(a) ((a)<0?((-1)*(a)):(a))
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int win=0, draw=0, lose=0;
    for(int i=1; i<=6; i++)
    {
        if(mod(a-i)<mod(b-i))
            win++;
        else if(mod(a-i)>mod(b-i))
            lose++;
        else
            draw++;
    }
    printf("%d %d %d\n",win,draw,lose);
}