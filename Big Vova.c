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

int GCD(int a, int b)
{
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int max=0;
        for(int i=0; i<n; i++) {
            scanf("%d",&a[i]);
            if(a[max]<a[i])
                max=i;
        }
        int temp=a[0];
        a[0]=a[max];
        a[max]=temp;
        temp=a[0];
        for(int i=0; i<n-1; i++) {
            int ind;
            max=0;
            for(int j=i+1; j<n; j++) {
                int t=GCD(a[j],temp);
                if(t>max) {
                    max=t;
                    ind=j;
                }
            }
            //printf("%d\n",max);
            temp=max;
            int t=a[ind];
            a[ind]=a[i+1];
            a[i+1]=t;
        }
        for(int i=0; i<n; i++)
            printf("%d ",a[i]);
        printf("\n");
    }
}