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

int isP(int *a, int n) {
    int f[n];
    for(int i=0; i<n; i++)
        f[i]=0;
    for(int i=0; i<n; i++) {
        if(a[i]<1 || a[i]>n || f[a[i]-1]==1)
            return 0;
        f[a[i]-1]++;
    }
    return 1;

}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int max=0;
        int a[n];
        for(int i=0; i<n; i++) {
            scanf("%d",&a[i]);
            max=MAX(max, a[i]);
        }
        
        int f1=isP(a, max);
        int f2=isP(a+max, n-max);
        int f3=isP(a, n-max);
        int f4=isP(a+n-max, max);
        int ans=0;
        if(f1==1 && f2==1) 
            ans++;
        if(2*max!=n && f3==1 && f4==1)
            ans++;
        printf("%d\n",ans);
        if(f1==1 && f2==1) 
            printf("%d %d\n", max, n-max);
        if(2*max!=n && f3==1 && f4==1)
            printf("%d %d\n", n-max, max);
    }
}