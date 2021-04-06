#include<stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int r,g,b,w;
        scanf("%d %d %d %d",&r,&g,&b,&w);
        int oc=0;
        if(r%2==0) oc++;
        if(g%2==0) oc++;
        if(b%2==0) oc++;
        if(oc==3||oc==0)
        {
            printf("Yes\n");
        }
        else if(oc==2&&w%2==0)
        {
            printf("Yes\n");
        }
        else if(oc==1&&w%2==1&&r>0&&g>0&&b>0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }
}