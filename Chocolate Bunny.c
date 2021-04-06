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
    int n;
    scanf("%d",&n);
    if(n==1) {
        printf("! 1\n");
        fflush(stdout);
        return 0;
    }

    int a[n+1]; int f[n+1];
    for(int i=1; i<=n; i++) {
        a[i]=0;
        f[i]=0;
    }
    int ch=1, uc=2;
    int in1, in2;
    while(uc<=n) {
        printf("? %d %d\n",ch,uc);
        fflush(stdout);
        scanf("%d",&in1);
        printf("? %d %d\n",uc,ch);
        fflush(stdout);
        scanf("%d",&in2);
        if(in1>in2) {
            a[ch]=in1;
            ch=uc;
            uc++;
            f[in1]=1;
            //printf("<%d %d %d>",ch,uc,in1);
        } else {
            a[uc]=in2;
            uc++;
            f[in2]=1;
            //printf("<%d %d %d>",ch,uc,in2);
        }
    }
    for(int i=1; i<=n; i++)
        if(f[i]==0) {
            a[ch]=i; break;
        }
    printf("! ");
    for(int i=1; i<=n; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}