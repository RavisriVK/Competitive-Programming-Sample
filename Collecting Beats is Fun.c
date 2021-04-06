#include<stdio.h>
int main()
{
    int time[9]={0};
    int k;
    scanf("%d",&k);
    getchar();
    int c;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            c=getchar();
            if(c!='.')
                time[c-'1']++;
        }
        getchar();
    }
    for(int i=0; i<9; i++)
        if(2*k<time[i])
        {
            printf("NO\n");
            return 0;
        }
    printf("YES\n");
}