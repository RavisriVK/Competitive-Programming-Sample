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
        int n,k;
        scanf("%d %d",&n,&k);
        char s[n];
        scanf("%s",s);
        int flag=1;
        for(int i=0; i<k; i++) {
            int o=0, z=0;
            for(int j=i; j<n; j+=k) {
                //printf("%c",s[j]);
                if(s[j]=='0') 
                    z++; 
                else if(s[j]=='1') 
                    o++;
            }
            //printf("<%d %d>",o,z);
            if(o!=0&&z!=0) {
                flag=0;
                break;
            }
            if(o!=0)
                s[i]='1';
            else if(z!=0)
                s[i]='0';
        }
        int o=0, z=0;
        for(int i=0; i<k; i++)
            if(s[i]=='0')
                z++;
            else if(s[i]=='1')
                o++;
        int q=(k-z-o);

        if(flag==1 && q>=MOD(o-z) && (q-MOD(o-z))%2==0)
            printf("YES\n");
        else 
            printf("NO\n");
    }
}