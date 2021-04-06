#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        {
            for(int i=0; i<n/2; i++)
                putchar('1');
        }
        else
        {
            putchar('7');
            for(int i=0; i<(n-3)/2; i++)
                putchar('1');
        }
        printf("\n");
    }
}