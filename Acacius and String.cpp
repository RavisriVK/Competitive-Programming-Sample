#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))


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
        char pat[]="abacaba";

        int p=0, t=0;
        for(int i=0; i+6<n; i++) {
            int flag=0; int ist=0;
            for(int j=0; j<7; j++) {
                if(s[i+j]!=pat[j] && s[i+j]!='?') {
                    flag=1; break;
                }
                if(s[i+j]=='?') ist=1;
            }
            if(flag==1) continue;
            if(ist==1) {t++;} else {p++;}
            i+=3;
        }

        if(p>1) {
            printf("NO\n");
            continue;
        } else if(p==1) {
            for(int i=0; i<n; i++)
                if(s[i]=='?') s[i]='z';
            printf("YES\n%s\n",s);
            continue;
        }

        int flag=0;
        for(int i=0; i+6<n; i++) {
            if((s[i]=='a'||s[i]=='?') && (s[i+1]=='b'||s[i+1]=='?') && (s[i+2]=='a'||s[i+2]=='?') && (s[i+3]=='c'||s[i+3]=='?') && (s[i+4]=='a'||s[i+4]=='?') && (s[i+5]=='b'||s[i+5]=='?') && (s[i+6]=='a'||s[i+6]=='?')) {
                if((i+10<n) && s[i+7]=='c' && s[i+8]=='a' && s[i+9]=='b' && s[i+10]=='a') continue;
                if((i+12<n) && s[i+7]=='b' && s[i+8]=='a' && s[i+9]=='c' && s[i+10]=='a' && s[i+11]=='b' && s[i+12]=='a') continue;
                if((i-4>=0) && s[i-4]=='a' && s[i-3]=='b' && s[i-2]=='a' && s[i-1]=='c') continue;
                if((i-6>=0) && s[i-6]=='a' && s[i-5]=='b' && s[i-4]=='a' && s[i-3]=='c' && s[i-2]=='a' && s[i-1]=='b') continue;
                for(int j=0; j<7; j++)
                    s[i+j]=pat[j];
                flag=1;
                break;
            }
        }

        if(flag==0) {
            printf("NO\n");
            continue;
        }

        for(int i=0; i<n; i++)
            if(s[i]=='?') s[i]='z';
        printf("YES\n%s\n",s);

    }
}