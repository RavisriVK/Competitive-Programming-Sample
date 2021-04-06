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
    int n,m;
    scanf("%d %d",&n,&m);
    unsigned int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    unsigned int b[m];
    for(int i=0; i<m; i++)
        scanf("%d",&b[i]);
    for(unsigned int k=0; k<2048; k++) {
        int count=0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(((a[i]&b[j])|k)==k) {
                    count++;
                    break;
                }
            }
        }
        if(count==n) {
            printf("%d\n",k);
            break;
        }
    }
}