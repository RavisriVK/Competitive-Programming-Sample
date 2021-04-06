#include<stdio.h>
int main()
{
    char num[50];
    int n=0;
    int in=getchar();
    num[n++]=in;
    while(getchar()!='\n')
    {
        in=getchar();
        num[n++]=in;
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(num[j]>num[j+1])
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n-1; i++)
        printf("%c+",num[i]);
    printf("%c\n",num[n-1]);
}