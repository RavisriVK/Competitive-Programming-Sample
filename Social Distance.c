#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        char s[n+1];
        scanf("%s",s);
        int seq;
        int extra=0;
        int flag=0;
        int start, end;
        for(flag=0; flag<n&&s[flag]=='0'; flag++)
            ;
        if(flag==n)
        {
            printf("%d\n",1+(n-1)/(k+1));
            continue;
        }
        extra+=flag/(k+1);
        start=flag;
        for(flag=0; n-flag>=0&&s[n-1-flag]=='0'; flag++)
            ;
        extra+=flag/(k+1);
        end=n-flag;
        for(int i=start; i<end; i++)
        {
            if(s[i]=='0'&&(i==0||s[i-1]=='1'))
            {
                for(seq=0;s[i]=='0';i++)
                    seq++;
                extra+=(seq+1)/(k+1)-1;
            }
        }
        printf("%d\n",extra);
    }
}