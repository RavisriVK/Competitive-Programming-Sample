#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int out[N];
    for(int i=0; i<N; i++)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
            out[i]=n/2;
        else
            out[i]=1+n/2;
    }
    for(int i=0; i<N; i++)
    {
        printf("%d\n",out[i]);
    }
}