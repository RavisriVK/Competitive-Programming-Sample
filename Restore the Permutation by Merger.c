#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[2*n];
        for(int i=0; i<2*n; i++)
            scanf("%d",&a[i]);
        int out[n];
        out[0]=a[0];
        int outp=0;
        for(int i=1; i<2*n; i++)
        {
            int flag=0;
            for(int j=0; j<=outp; j++)
                if(a[i]==out[j])
                {
                    flag=1;
                    break;
                }
            if(flag==0)
                out[++outp]=a[i];
        }
        for(int i=0; i<n; i++)
            printf("%d ",out[i]);
        printf("\n");
    }
}