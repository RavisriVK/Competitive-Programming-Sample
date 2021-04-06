#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        char s[200001];
        scanf("%s",s);
        int length=strlen(s);
        int m[3]={0};
        for(int i=0; i<length; i++)
        {
            switch(s[i])
            {
                case 'R':m[0]++;break;
                case 'P':m[1]++;break;
                case 'S':m[2]++;break;
            }
        }
        char c;
        if(m[0]>=m[1]&&m[0]>=m[2])
            c='P';
        else if(m[1]>=m[2])
            c='S';
        else
            c='R';
        for(int i=0; i<length; i++)
            printf("%c",c);
        printf("\n");
    }
}