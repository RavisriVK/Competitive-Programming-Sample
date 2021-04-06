#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b) {
    return (*(int *)a)-(*(int *)b);
}


int main() {
    int N;
    scanf("%d",&N);
    while(N--) {
        int n,k,z;
        scanf("%d %d %d",&n,&k,&z);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int ans = 0;
        int s = 0;
        int mx = 0;
        for(int t=0; t<=z; t++) {
            int pos = k - 2 * t;
            if(pos < 0)
                continue;
            mx = 0;
            s = 0;
            for(int i=0; i<=pos; i++) {
                if(i < n - 1)
                    mx = MAX(mx, a[i] + a[i + 1]);
                s += a[i];
            }
            ans = MAX(ans, s + mx * t);
        }
        printf("%d\n",ans);
    }
}