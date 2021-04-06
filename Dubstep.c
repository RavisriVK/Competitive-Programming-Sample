#include<stdio.h>
#include<string.h>
int main()
{
    char s[201];
    scanf("%[^\n]s",s);
    char out[201];
    int outp=0;
    int length=strlen(s);
    for(int i=0; i<length; i++)
    {
        if(i<length-2&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i+=2;
            out[outp++]=' ';
        }
        else
        {
            out[outp++]=s[i];
        }
    }
    int i=0;
    for(;out[i]==' ';i++)
        ;
    while(i<outp)
    {
        if(out[i]!=' ')
        {
            putchar(out[i++]);
        }
        else 
        {
            for(;out[i]==' ';i++)
                ;
            putchar(' ');
        }
    }
    printf("\n");
}