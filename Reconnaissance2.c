#include<stdio.h>
#define mod(a) ((a)>=0?(a):(-1*(a)))
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    scanf("%d",&a[0]);
    scanf("%d",&a[1]);
    int min=mod(a[1]-a[0]);
    int minindex=0;
    for(int i=2; i<N; i++)
    {
        scanf("%d",&a[i]);
        if(min>mod(a[i]-a[i-1]))
        {
            min=mod(a[i]-a[i-1]);
            minindex=i-1;
        }
    }
    if(min>mod(a[0]-a[N-1]))
    {
        min=mod(a[0]-a[N-1]);
        minindex=N-1;
    }
    printf("%d %d\n",minindex+1,1+(minindex+1)%N);
}