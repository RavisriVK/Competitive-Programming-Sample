#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long n;
        scanf("%ld",&n);
        long difCount=0;
        int temp, ptemp, derangements=0;
        scanf("%d",&ptemp);
        if(ptemp!=1)
        {
            difCount++;
            derangements++;
        }
        for(long i=2; i<=n; i++)
        {
            scanf("%d",&temp);
            if(temp!=i)
            {
                difCount++;
                if(ptemp==i-1)
                    derangements++;
            }
            ptemp=temp;
        }
        if(difCount==0)
        {
            printf("0\n");
        }
        else if(difCount==n)
        {
            printf("1\n");
        }
        else if(derangements==1)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
        
    }
}