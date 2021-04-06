#include<stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
int ceil(int a, int b)
{
    if(a%b==0)
        return a;
    else 
        return b+a/b*b;
}
int main()
{
    int hh,mm;
    scanf("%d %d",&hh,&mm);
    int H,D,C,N;
    scanf("%d %d %d %d",&H,&D,&C,&N);
    if(hh>=20)
    {
        printf("%f\n",0.8*C*(ceil(H,N)/N));
    }
    else
    {
        int w=60*(19-hh)+(60-mm);
        int nH=H+D*w;
        printf("%f\n",min(1.0*C*(ceil(H,N)/N),0.8*C*(ceil(nH,N)/N)));
    }
    
}