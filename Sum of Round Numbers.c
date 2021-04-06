#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[10];
        int p10=1,d,count=0;
        while(n>0)
        {
            d=n%10;
            if(d!=0)
            {
                a[count]=d*p10;
                count++;
            }
            n/=10;
            p10*=10;
        }
        printf("%d\n",count);
        for(int i=0; i<count; i++)
            printf("%d ",a[i]);
        printf("\n");
    }
}