#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    //int N;
    //scanf("%d",&N);
    //while(N--)
    {
        char s[101];
        scanf("%s",s);
        char t[101];
        scanf("%s",t);
        int length=strlen(s);
        for(int i=0; i<length; i++)
        {
            if(tolower(s[i])<tolower(t[i]))
            {
                printf("-1\n");
                return 0;
            }
            else if(tolower(s[i])>tolower(t[i]))
            {
                printf("1\n");
                return 0;
            }
        }
        printf("0\n");
    }
}