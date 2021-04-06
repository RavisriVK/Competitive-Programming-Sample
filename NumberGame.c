#include<stdio.h>
#include<math.h>
int check(int n)
{
    for(int i=3; i*i<=n; i+=2)
        if(n%i==0)
            return 0;
    return 1;
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int p2;
        if(n==1)
        {
            printf("FastestFinger\n");
            continue;
        }
        else if(n==2)
        {
            printf("Ashishgup\n");
            continue;
        } 
        else if(n%2==1)
        {
            printf("Ashishgup\n");
            continue;
        }

        for(p2=0; n>0 && n%2==0; n/=2)
            p2++;
        if(p2>1&&n!=1)
            printf("Ashishgup\n");
        else if(check(n)==1)
            printf("FastestFinger\n");
        else 
            printf("Ashishgup\n");
    }
}