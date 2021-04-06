#include<stdio.h>
#include<string.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        char s[100];
        scanf("%s",s);
        int ones=0;
        int zeros=0;
        for(int i=0; i<strlen(s); i++)
            if(s[i]=='0')
                zeros++;
            else
                ones++;
        if(ones>=zeros)
        {
            if(zeros%2==1)
                printf("DA\n");
            else
                printf("NET\n");
        }
        else
        {
            if(ones%2==1)
                printf("DA\n");
            else
                printf("NET\n");
        }
    }
}