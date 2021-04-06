#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}


int main()
{
    int N;
    scanf("%d",&N);
    for(int I=1; I<=N; I++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int arma[n-1];
        for(int i=0; i<n-1; i++)
            arma[i]=2;
        int armap=0;
        for(int i=1; i<n; i++)
        {
            for(int temp=a[i]-a[i-1]; i+1<n && (a[i+1]-a[i])==temp; i++)
            {
                arma[armap]++;
            }
            if(arma[armap]!=2)
            {
                armap++;
                i--;
            }
        }
        int max=arma[0];
        for(int i=1; i<armap; i++)
            max=MAX(max,arma[i]);
        printf("Case #%d: %d\n",I,max);
    }
}