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
        char S[n+1];
        strcpy(S, s);
        char T[n+1];
        strcpy(T, t);
        int f[26]={0};
        for(int i=0; i<n; i++) {
            f[s[i]-'a']++;
            f[t[i]-'a']++;
        }
        int flag=0;
        for(int i=0; i<26; i++) {
            if(f[i]%2==1) {
                flag=1;
                break;
            }
        }
        if(flag==1) {
            printf("No\n");
            continue;
        }
        printf("Yes\n");
        int count=0;
        for(int i=0; i<n; i++) {
            if(s[i]!=t[i]) {
                int j;
                for(j=i+1; j<n && s[j]!=s[i]; j++)
                    ;
                if(j<n) {
                    char temp=s[j];
                    s[j]=t[i];
                    t[i]=temp;
                    //printf("%d %d\n",j+1, i+1);
                    count++;
                    continue;
                }
                for(j=i+1; j<n && t[j]!=t[i]; j++)
                    ;
                if(j<n) {
                    char temp=t[j];
                    t[j]=s[i];
                    s[i]=temp;
                    //printf("%d %d\n",i+1, j+1);
                    count++;
                    continue;
                }
                char temp=s[i];
                s[i]=t[i];
                t[i]=temp;
                //printf("%d %d\n",i+1,i+1);
                count++;
                for(j=i+1; j<n && s[j]!=s[i]; j++)
                    ;
                if(j<n) {
                    char temp=s[j];
                    s[j]=t[i];
                    t[i]=temp;
                    //printf("%d %d\n",j+1, i+1);
                    count++;
                    continue;
                }
                for(j=i+1; j<n && t[j]!=t[i]; j++)
                    ;
                if(j<n) {
                    char temp=t[j];
                    t[j]=s[i];
                    s[i]=temp;
                    //printf("%d %d\n",i+1, j+1);
                    count++;
                    continue;
                }

            }
        }
        printf("%d\n",count);
        for(int i=0; i<n; i++) {
            if(S[i]!=T[i]) {
                int j;
                for(j=i+1; j<n && S[j]!=S[i]; j++)
                    ;
                if(j<n) {
                    char temp=S[j];
                    S[j]=T[i];
                    T[i]=temp;
                    printf("%d %d\n",j+1, i+1);
                    continue;
                }
                for(j=i+1; j<n && T[j]!=T[i]; j++)
                    ;
                if(j<n) {
                    char temp=T[j];
                    T[j]=S[i];
                    S[i]=temp;
                    printf("%d %d\n",i+1, j+1);
                    count++;
                    continue;
                }
                char temp=S[i];
                S[i]=T[i];
                T[i]=temp;
                printf("%d %d\n",i+1,i+1);
                for(j=i+1; j<n && S[j]!=S[i]; j++)
                    ;
                if(j<n) {
                    char temp=S[j];
                    S[j]=T[i];
                    T[i]=temp;
                    printf("%d %d\n",j+1, i+1);
                    continue;
                }
                for(j=i+1; j<n && T[j]!=T[i]; j++)
                    ;
                if(j<n) {
                    char temp=T[j];
                    T[j]=S[i];
                    S[i]=temp;
                    printf("%d %d\n",i+1, j+1);
                    continue;
                }

            }
        }
    }
}