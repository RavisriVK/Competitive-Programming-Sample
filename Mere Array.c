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
        int n;
        scanf("%d",&n);
        int a[n];
        int min=1000000000;
        for(int i=0; i<n; i++) {
            scanf("%d",&a[i]);
            min=MIN(min, a[i]);
        }
        int d[n]; int pd=0;
        int dv[n];
        for(int i=0; i<n; i++) {
            if(a[i]%min==0) {
                d[pd]=i;
                dv[pd]=a[i];
                pd++;
            }
        }
        qsort(dv, pd, sizeof(int), cmp);
        for(int i=0; i<pd; i++) {
            a[d[i]]=dv[i];
        }
        int first=0;
        int flag=0;
        for(int i=0; i<n; i++) {
            if(first<=a[i]) {
                first=a[i];
            } else {
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("NO\n");
        else 
            printf("YES\n");
    }
}