#include<stdio.h>

int f(int n)
{
    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return i;
    return n;
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int temp;
        for(int i=0; i<k; i++)
        {
            temp=f(n);
            if(temp==2) 
            {
                n+=2*(k-i);
                break;
            }
            n+=temp;
        }
        printf("%d\n",n);
    }
}