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

int cmp2(const void *a, const void *b)
{
    //if( (((int *)a)[0])-(((int *)b)[0]) != 0 )
        return (((int *)a)[0])-(((int *)b)[0]);
    //else
    //    return (((int *)a)[1])-(((int *)b)[1]);
}

int cmp3(const void *a, const void *b)
{
    //if( (((int *)a)[0])-(((int *)b)[0]) != 0 )
        return (((int *)a)[1])-(((int *)b)[1]);
    //else
    //    return (((int *)a)[1])-(((int *)b)[1]);
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n, t;
        scanf("%d %d",&n,&t);
        int a[n][3];
        for(int i=0; i<n; i++) {
            scanf("%d",&a[i][0]);
            a[i][1]=i+1;
            a[i][2]=0;
        }
        qsort(a, n, sizeof(int[3]), cmp2);
        int i=0, j=n-1;
        while(i<j) {
            if(a[i][0]+a[j][0]==t) {
                if(a[i][0]==a[j][0]) {
                    int temp=j+1-i;
                    for(int k=0; k<temp/2; k++)
                        a[i+k][2]=1;
                    break;
                } else {
                    int temp=a[j][0];
                    while(a[j][0]==temp) {
                        a[j][2]=1;
                        j--;
                    }
                    i++;
                }
            } else if((a[i][0]+a[j][0])>t) {
                j--;
            } else {
                i++;
            }
        }
        qsort(a, n, sizeof(int[3]), cmp3);
        for(int i=0; i<n; i++)
            printf("%d ",a[i][2]);
        printf("\n");
    }
}