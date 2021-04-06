#include<stdio.h>
#include<string.h>
int ip(char *s, int n)
{
    int flag=1;
    for(int i=0; i<=n/2; i++)
        if(s[i]!=s[n-1-i])
        {
            flag=0;
            break;
        }
    return flag;
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        char s[5001];
        scanf("%s",s);
        int n=strlen(s);
        int pt=0;
        for(int i=0; i<n/2 && s[i]==s[n-1-i]; i++)
            pt++;
        //printf("%d\n",pt);
        int ml=0;
        for(int i=n-pt-1; i>=pt; i--)
        {
            if(ip(s+pt,1+i-pt)==1)
            {
                ml=1+i-pt;
                break;
            }
        }
        //printf("%d\n",ml);
        int mll=0;
        for(int i=pt; i<n-pt; i++)
        {
            if(ip(s+i,n-pt-i))
            {
                mll=n-pt-i;
                break;
            }
        }
        for(int i=0; i<pt; i++)
            printf("%c",s[i]);
        if(ml>=mll)
        {
            for(int i=pt; i<pt+ml; i++)
                printf("%c",s[i]);
        }
        else
        {
            for(int i=n-pt-mll; i<n-pt; i++)
                printf("%c",s[i]);
        }
        for(int i=0; i<pt; i++)
            printf("%c",s[n-pt+i]);
        printf("\n");
    }
}