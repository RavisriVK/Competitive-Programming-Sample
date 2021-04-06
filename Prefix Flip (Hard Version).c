#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef long long ll;

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}

int cmp1(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}

#define NOT(x) ((x)=='0'?('1'):('0'))

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        char t[n+1];
        scanf("%s",t);


        int moves[2*n];
        int cnt=0;


        int b=0, e=n-1;

        for(int i=0; i<n; i++) {
            if(i%2==0) {
                if(s[b]==t[n-1-i]) {
                    moves[cnt]=1;
                    cnt++;
                }
                b++;
            } else {
                if(NOT(s[e])==t[n-1-i]) {
                    moves[cnt]=1;
                    cnt++;
                }
                e--;
            }
            moves[cnt]=n-i; cnt++;
        }

        
        printf("%d ",cnt);
        for(int i=0; i<cnt; i++)
            printf("%d ",moves[i]);
        printf("\n");
    }
}