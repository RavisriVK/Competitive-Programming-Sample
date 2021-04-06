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

/* Test case 1 done */

int main()
{
    int N;
    scanf("%d",&N);
    for(int K=1; K<=N; K++)
    {
        int s, ra, pa, rb, pb, c;
        scanf("%d %d %d %d %d %d",&s, &ra, &pa, &rb, &pb, &c);
        int cn[c][2];
        for(int i=0; i<c; i++)
            scanf("%d %d",&cn[i][0], &cn[i][1]);
        printf("Case #%d: ",K);
        if((ra+pa)!=4 && (rb+pb)!=4) {
            if(c==2 || (c==1 && (cn[0][0]+cn[0][1]==4)) ) {
                printf("0\n");
            } else if(c==1) {
                printf("1\n");
            } else {
                printf("2\n");
            }
        } else {
            if(c==2) {
                printf("0\n");
            } else if((ra+pa)==4) {
                printf("1\n");
            } else {
                printf("-1\n");
            }
        }
    }
}