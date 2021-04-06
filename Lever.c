#include<stdio.h>
#include<string.h>
int isnumber(int d)
{
    if(d>='0'&&d<='9')
        return 1;
    else
        return 0;
}
int main()
{
    char s[1000001];
    scanf("%s",s);
    int length=strlen(s);
    int pivot;
    for(int i=0; i<length; i++)
        if(s[i]=='^')
        {
            pivot=i;
            break;
        }
    long long left=0, right=0;
    for(int i=pivot-1; i>=0; i--)
        if(isnumber(s[i]))
            left+=(pivot-i)*(s[i]-'0');
    for(int i=pivot+1; i<length; i++)
        if(isnumber(s[i]))
            right+=(i-pivot)*(s[i]-'0');

    if(left>right)
        printf("left\n");
    else if(right>left)
        printf("right\n");
    else 
        printf("balance\n");
}