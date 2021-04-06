#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int pyramidCount=0;
        while(n>1)
        {
            int height=(int)floor((sqrt(1.0+24.0*n)-1.0)/6.0);
            n-=(height*(3*height+1))/2;
            pyramidCount++;
        }
        printf("%d\n",pyramidCount);
    }
}