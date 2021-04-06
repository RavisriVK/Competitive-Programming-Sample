#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        int even=0,odd=0;
        for(int i=0; i<n; i++)
            if((s[i]-'0')%2==1)
                odd++;
            else
                even++;
        if(odd>=2)
        {
            odd=0;
            for(int i=0; i<n&&odd<2; i++)
                if((s[i]-'0')%2==1)
                {
                    putchar(s[i]);
                    odd++;
                }
            printf("\n");
        }
        else
        {
            printf("-1\n");
        }
        
            
    }
}