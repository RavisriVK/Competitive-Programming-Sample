#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int cmp(const void *a, const void *b) {
    return (*(int *)a)-(*(int *)b);
}


int main() {
    int N;
    scanf("%d",&N);
    while(N--) {
        char s[100001];
        scanf("%s",s);
        int x;
        scanf("%d",&x);
        int n=strlen(s);
        char w[100001];
        for(int i=0; i<n; i++)
            w[i]='1';
        for(int i=0; i<n; i++) {
            if(s[i]=='0') {
                if(i-x>=0) w[i-x]='0';
                if(i+x<n)  w[i+x]='0';
            }
        }
        int flag=0;
        for(int i=0; i<n; i++) {
            if(s[i]=='1') {
                if(!((i-x>=0 && w[i-x]=='1')||(i+x<n && w[i+x]=='1'))) {
                    flag=1;
                    break;
                }
            }
        }
        w[n]='\0';
        if(flag==1)
            printf("-1\n");
        else 
            printf("%s\n",w);
    }
}