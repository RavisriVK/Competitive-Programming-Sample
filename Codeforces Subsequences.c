#include<stdio.h>

char s[]="codeforces";

int main()
{
    long long k;
    scanf("%lld",&k);
    long long pro=1;
    long long a[10];
    for(int i=0; i<10; i++)
        a[i]=1;
    char s[]="codeforces";
    int place=0;
    while(pro<k)
    {
        long long temp=a[place];
        a[place]++;
        pro=pro/temp*(temp+1);
        place=(place+1)%10;
    }
    for(int i=0; i<10; i++)
        for(int j=0; j<a[i]; j++)
            printf("%c",s[i]);
    printf("\n");
}