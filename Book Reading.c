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
    int s[10][10]={
        {0,0,0,0,0,0,0,0,0,0},
        {0,1,3,6,10,15,21,28,36,45},
        {0,2,6,12,20,20,22,26,32,40},
        {0,3,9,18,20,25,33,34,38,45},
        {0,4,12,14,20,20,24,32,34,40},
        {0,5,5,10,10,15,15,20,20,25},
        {0,6,8,16,20,20,26,28,36,40},
        {0,7,11,12,20,25,27,36,42,45},
        {0,8,14,18,20,20,28,34,38,40},
        {0,9,17,24,30,35,39,42,44,45}
    };
    while(N--)
    {
        long long n,m;
        scanf("%lld %lld",&n,&m);
        long long sum=0;
        long long d=m%10;
        if(d==0)
        {
            printf("0\n");
            continue;
        }
        long long nd=n/(m*10);
        long long ndd=n-nd*m*10;
        sum+=nd*s[d][9];
        //printf("%lld <%lld %lld>\n",sum,nd,ndd);
        sum+=s[d][ndd/m];
        printf("%lld\n",sum);
    }
}