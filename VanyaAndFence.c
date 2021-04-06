#include<stdio.h>
int main()
{
    int n,h;
    scanf("%d %d",&n,&h);
    int in;
    int width=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&in);
        if(in>h)
            width+=2;
        else 
            width+=1;
    }
    printf("%d\n",width);
}