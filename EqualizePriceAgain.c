#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        unsigned long long sum=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        int MIN=(sum%n==0)?(sum/n):1+(sum/n);
        printf("%d\n",MIN);
    }
}