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
        char s[n+1];
        scanf("%s",s);
        char t[n+1];
        scanf("%s",t);
        int c1=-1, c2=-1, c3=-1, c4=-1;
        int dif=0;
        for(int i=0; i<n && dif<3; i++) {
            if(s[i]!=t[i]) {
                dif++;
                if(dif==1) {
                    c1=s[i];
                    c3=t[i];
                } else {
                    c2=s[i];
                    c4=t[i];
                }
            }
        }
        if(dif==0) {
            printf("Yes\n");
        } else if(dif==2 && c1==c2 && c3==c4) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
}