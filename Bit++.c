#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[4];
    int x=0;
    for(int i=0; i<n; i++)
    {
        scanf("%s",s);
        if(s[0]=='+'&&s[1]=='+'||s[1]=='+'&&s[2]=='+')
            x++;
        else
            x--;
    }
    printf("%d\n",x);
}