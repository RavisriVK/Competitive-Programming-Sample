#include<iostream>
#include<string>
#include<stdlib.h>
#include<string.h>
#include<math.h>

using namespace std;

void KMP(string s) {
    int lp=s.length();
    int lps[lp];
    for(int i=0; i<lp; i++)
        lps[i]=0;
    int j=0;
    for(int i=1; i<lp; i+=max(1,j))
        for(j=0; j<lp && s[i+j]==s[j]; j++)
            lps[i+j]=j+1;
    return lps[lp-1];

    /*for(int i=0; i<lp; i++)
        printf("%d ",lps[i]); printf("\n");

    int lt=strlen(t);
    int i=0; j=0;
    while(i<lt) {
        if(t[i]==s[j]) {
            i++; j++;
        } else if(j!=0) {
            j=lps[j-1];
        } else {
            i++;
        }
        if(j==lp) {
            printf("%d ",i-lp);
            j=lps[lp-1];
        }
    }
    printf("\n");*/
}

int main(int argc, char **argv)
{
    KMP(argv[1], argv[2]);
}