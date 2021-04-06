#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char team1[11];
    char team2[11];
    char in[11];
    int t1=0, t2=0;
    scanf("%s",team1);
    t1++;
    for(int i=1; i<n; i++)
    {
        scanf("%s",in);
        if(strcmp(team1,in)==0)
            t1++;
        else if(t2==0)
        {
            t2++;
            strcpy(team2,in);
        }
        else
            t2++;
    }
    if(t1>t2)
        printf("%s\n",team1);
    else
        printf("%s\n",team2);
}