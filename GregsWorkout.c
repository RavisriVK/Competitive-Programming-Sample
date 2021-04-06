#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int chest=0, biceps=0, back=0;
    int test;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&test);
        if(i%3==0)
            chest+=test;
        else if(i%3==1)
            biceps+=test;
        else
            back+=test;
    }
    if(chest>back&& chest>biceps)
        printf("chest\n");
    else if(back>biceps)
        printf("back\n");
    else
        printf("biceps\n");
}