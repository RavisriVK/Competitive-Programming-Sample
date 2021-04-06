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
        int a, b, p;
        scanf("%d %d %d",&a, &b, &p);
        char s[100001];
        scanf("%s",s);
        int n=strlen(s);
        int price=0;
        int last=n;
        int flag=0;
        if(s[n-1]!=s[n-2]) {
            if(s[n-1]=='A') price-=a; else price-=b;
        }
        for(int i=n-1; i>=0; i--) {
            char element=s[i];
            last=MIN(i+2, n);
            while(i>=0 && s[i]==element)
                i--;
            if(element=='A') price+=a; else price+=b;
            if(price>p) {
                flag=1;
                break;
            }
            i++;
        }
        if(flag==1) {
            printf("%d\n",last);
        } else {
            printf("1\n");
        }
    }
}