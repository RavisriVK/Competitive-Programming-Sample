#include<stdio.h>
#include<string.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        char s[101];
        scanf("%s",s);
        if(strlen(s)<=10)
            printf("%s\n",s);
        else
            printf("%c%ld%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);
    }
}