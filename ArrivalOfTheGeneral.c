#include<stdio.h>
#define min(a,b) ((a)>(b)?(b):(a))
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int minIndex=0, maxIndex=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=a[minIndex])
            minIndex=i;
        if(a[i]>a[maxIndex])
            maxIndex=i;
    }
    if(maxIndex>minIndex)
        maxIndex--;
    printf("%d\n",maxIndex+(n-1-minIndex));
}