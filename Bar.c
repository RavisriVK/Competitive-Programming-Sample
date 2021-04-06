#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    char info[1001];
    char *alcohol[]={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    int check=0;
    for(int i=0; i<n; i++)
    {
        scanf("%s",info);
        if(info[0]>='A'&&info[0]<='Z')
        {
            int j;
            for(j=0; j<11; j++)
            {
                if(strcmp(info,alcohol[j])==0)
                {
                    break;
                }
            }
            if(j!=11)
                check++;
        }
        else if(atoi(info)<18)
        {
            check++;
        }
    }
    printf("%d\n",check);
}