#include<stdio.h>
#include<math.h>

#define PI 3.14159265358979323846264338327950288
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int sides=2*n;
        double halfext=PI/sides;
        double ext=2.0*halfext;
        double halfans=0;
        double start;
        if(n%2==0)
        {
            halfans=0.5;
            for(start=ext; start<(PI/2); start+=ext)
                halfans+=cos(start);
        }
        else
        {
            for(start=halfext; start<(PI/2); start+=ext)
                halfans+=cos(start);
        }
        printf("%.7f\n",2.0*halfans);
        
    }
}