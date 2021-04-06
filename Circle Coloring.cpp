#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}

int cmp1(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int op[n][3];
        int check[n];
        for(int i=0; i<n; i++)
            check[i]=0;
        for(int j=0; j<3; j++) {
            for(int i=0; i<n; i++) {
                scanf("%d",&op[i][j]);
            }
        }
        printf("%d ",op[0][0]);
        for(int i=1; i<n-1; i++) {
            int flag;
            for(int j=0; j<3; j++)
                if(op[i][j]!=op[i-1][check[i-1]])
                    flag=j;
            check[i]=flag;
            printf("%d ",op[i][flag]);
        }
        int flag;
        for(int j=0; j<3; j++)
            if(op[n-1][j]!=op[n-2][check[n-2]] && op[n-1][j]!=op[0][0])
                flag=j;
        printf("%d\n", op[n-1][flag]);
    }
}