#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int out[N];
    for(int k=0; k<N; k++)
    {
        long n;
        scanf("%ld",&n);
        if(n%4==0)
            out[k]=1;
        else
            out[k]=0;
    }
    for(int k=0; k<N; k++)
    {
        if(out[k]==0)
            printf("No\n");
        else
            printf("Yes\n");
    }
}