#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

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
        char s[9][10];
        for(int i=0; i<9; i++)
            scanf("%s",s[i]);
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(s[i][j]=='1')
                    putchar('2');
                else 
                    putchar(s[i][j]);
            }
            printf("\n");
        }
    }
}