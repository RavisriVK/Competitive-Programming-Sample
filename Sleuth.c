#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[101];
    char lastLetter;
    scanf("%s",s);
    while(strcmp(s,"?")!=0&&isalpha((lastLetter=s[strlen(s)-1]))) 
        scanf("%s",s);
    if(strcmp(s,"?")!=0)
        lastLetter=s[strlen(s)-2];
    if(tolower(lastLetter)=='a'||tolower(lastLetter)=='e'||tolower(lastLetter)=='i'||tolower(lastLetter)=='o'||tolower(lastLetter)=='u'||tolower(lastLetter)=='y')
        printf("YES\n");
    else
        printf("NO\n");
}