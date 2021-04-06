#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    char t[101];
    scanf("%s",t);
    if(strlen(s)!=strlen(t))
    {
        printf("NO\n");
    }
    else
    {
        int length=strlen(s);
        for(int i=0; i<length; i++)
        {
            if(s[i]!=t[length-1-i])
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
    }
}