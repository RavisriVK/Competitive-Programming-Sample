#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int a[N][2];
    for(int i=0; i<N; i++)
        scanf("%d %d",&a[i][0],&a[i][1]);
    int host=0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<i; j++)
            if(a[i][1]==a[j][0])
                host++;
        for(int j=i+1; j<N; j++)
            if(a[i][1]==a[j][0])
                host++;
    }
    printf("%d\n",host);
}