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
        int sum=0;
        for(int i=0; i<2*n; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        if(sum%2==0)
        {
            int i;
            for(i=1; i<2*n && (a[i]-a[0])%2!=0 ;i++)
                ;
            a[0]=(a[i]=-1);
        }
        else
        {
            int i;
            for(i=1; i<2*n && (a[i]-a[0])%2==0 ;i++)
                ;
            a[0]=(a[i]=-1);
        }
        for(int i=0; i<2*n; i++)
        {
            if(a[i]!=-1)
            {
                int j;
                for(j=i+1; j<2*n && (a[j]==-1 || (a[j]-a[i])%2!=0) ; j++)
                    ;
                if(j<2*n)
                    printf("%d %d\n",i+1,j+1);
                a[i]=(a[j]=-1);
            }
        }
    }
}