#include<stdio.h>

int p2(int n)
{
    int ans=1;
    for(int i=0; i<n; i++)
        ans*=2;
    return ans;
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",p2(1+n/2)-2);
    }
}