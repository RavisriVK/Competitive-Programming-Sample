#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        char a[n+1];
        scanf("%s",a);
        char b[n+1];
        scanf("%s",b);
        int i;
        for(i=0; i<n && a[i]<=b[i]; i++)
            ;
        if(i!=n)
        {
            printf("-1\n");
        }
        else
        {
            for(int i=0; i<n-1; i++)
                for(int j=0; j<n-1-i; j++)
                    if(b[j]>b[j+1])
                    {
                        char temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                        temp=b[j];
                        b[j]=b[j+1];
                        b[j+1]=temp;
                    }
                    else if(b[j]==b[j+1]&&a[j]<a[j+1])
                    {
                        char temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
            int inmax=0;
            int min=0;
            for(int i=0; i<n; i++)
            {
                if(a[i]==b[i])
                {
                    continue;
                }
                else if(i==0||b[i]!=b[i-1])
                {
                    inmax=a[i];
                    min++;
                }
                else if(b[i]==b[i-1]&&a[i]!=a[i-1])
                {
                    min++;
                }
            }
            printf("<%s>\n<%s>\n%d\n",a,b,min);
        }
    }
}