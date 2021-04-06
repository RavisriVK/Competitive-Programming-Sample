#include<stdio.h>
int isOdd(int *a, int n)
{
    int maxEve=-1;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0&&maxEve<a[i])
            maxEve=a[i];
    }
    return maxEve;
}
int main()
{
    int N;
    scanf("%d",&N);
    int out[N];
    for(int k=0; k<N; k++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int maxEve=-1;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0&&maxEve<a[i])
                maxEve=a[i];
        }
        int steps=0;
        while(maxEve!=-1)
        {
            int newMaxEve=-1;
            for(int i=0; i<n; i++)
            {
                if(a[i]==maxEve)
                    a[i]/=2;
                if(a[i]%2==0&&newMaxEve<a[i])
                    newMaxEve=a[i];
            }
            steps++;
            maxEve=newMaxEve;
        }
        out[k]=steps;
    }
    for(int i=0; i<N; i++)
    {
        printf("%d\n", out[i]);
    }
}