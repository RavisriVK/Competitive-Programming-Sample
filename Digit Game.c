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
        int e1=0, o1=0, e2=0, o2=0;
        for(int i=0; i<n; i++) {
            if(i%2==0) {
                if((s[i]-'0')%2==1) o1++; else e1++;
            } else {
                if((s[i]-'0')%2==1) o2++; else e2++;
            }
        }
        for(int i=0; i<n-1; i++) {
            if(i%2==0) {
                if(e1>0) e1--;
                else o1--;
            } else {
                if(o2>0) o2--;
                else e2--;
            }
        }
        if((o1+o2)>0)
            printf("1\n");
        else
            printf("2\n");
        
    }
}