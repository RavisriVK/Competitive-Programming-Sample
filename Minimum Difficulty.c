#include<stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
int main()
{
    int n;
    scanf("%d",&n);
    int dif[n-1];
    int in, in1;
    scanf("%d %d",&dif[0],&in);
    dif[0]=in-dif[0];
    for(int i=1; i<n-1; i++)
    {
        in1=in;
        scanf("%d",&in);
        dif[i]=in-in1;
    }
    int min=0;
    for(int i=1; i<n-2; i++)
    {
        if((dif[min]+dif[min+1])>(dif[i]+dif[i+1]))
            min=i;
    }
    dif[min]=(dif[min+1]=(dif[min]+dif[min+1]));
    int max=dif[0];
    for(int i=1; i<n-1; i++)
        if(max<dif[i])
            max=dif[i];
    printf("%d\n",max);
}