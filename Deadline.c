#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n, d;
        scanf("%d %d",&n,&d);
        int l1=(int) floor( ( (n-1.0) -sqrt(pow(n-1.0,2.0)-4.0*(d-n)) )/2.0 );
        l1=l1>=0?l1:0;
        int l2=(int) ceil(((n-1.0)+sqrt(pow(n-1.0,2.0)-4.0*(d-n)))/2.0);
        l2=l2<n?l2:n-1;
        int cond=0;
        for(int i=l1; i<=l2; i++)
        {
            if(((int)ceil(1.0*d/(1.0+i)))<=n-i)
            {
                cond=1;
                break;
            }
        }
        if(cond==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}