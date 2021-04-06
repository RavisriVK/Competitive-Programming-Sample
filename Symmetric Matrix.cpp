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


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n, m;
        scanf("%d %d",&n,&m);
        int flag=0;
        int in1, in2, in3, in4;
        if(m%2==1) {
            //printf("No\n");
            flag=1;
        }
        int f=0;
        for(int i=0; i<n; i++) {
            scanf("%d %d %d %d",&in1, &in2, &in3, &in4);
            if(in2==in3) {
                f=1; 
            }
        }
        if(flag==1 || f==0) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
}