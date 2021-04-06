#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int length=strlen(s);
    for(int i=0; i<length; i++)
    {
        switch(s[i])
        {
            case 'H':
            case 'Q':
            case '9': printf("YES\n"); return 0;
        }
    }
    printf("NO\n");
}