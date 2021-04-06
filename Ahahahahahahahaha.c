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
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int o=0, z=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==1)
                o++;
            else 
                z++;
        }
        if(o<=n/2) {
            printf("%d\n", z);
            for(int i=0; i<z; i++)
                printf("0 ");
        } else {
            printf("%d\n",o/2*2);
            for(int i=0; i<o/2*2; i++)
                printf("1 ");
        }
        printf("\n");
    }
}