#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>

using namespace std;

typedef long long ll;

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}

int cmp1(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}

int KMP(string s, int l);

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        string s;
        cin >> s;
        int l=s.length();
        int lps=0;
        while(lps<l/2 && s[lps]==s[l-1-lps])
            lps++;
        int ld=l-2*lps;
        string bg=s.substr(0,lps);
        string en=string(bg.rbegin(), bg.rend());
        string mid=s.substr(lps, ld);
        string rmid=string(mid.rbegin(), mid.rend());
        /*cout << mid + "#" + rmid << "\n";
        cout << rmid + "#" + mid << "\n";*/
        int l1=KMP(mid + "#" + rmid, 2*ld+1);
        int l2=KMP(rmid + "#" + mid, 2*ld+1);
        cout << bg;
        if(l1>=l2 && l1!=0) {
            cout << mid.substr(0, l1);
        } else if(l2!=0) {
            cout << rmid.substr(0, l2);
        }
        cout << en << "\n";
    }
}

int KMP(string s, int l) {
    if(l==1) return 0;
    int lp=l;
    int lps[lp];
    for(int i=0; i<lp; i++)
        lps[i]=0;
    int j=0;
    for(int i=1; i<lp; i+=max(1,j))
        for(j=0; j<lp && s[i+j]==s[j]; j++)
            lps[i+j]=j+1;
    

    /*for(int i=0; i<lp; i++)
        printf("%d ",lps[i]); 
    printf("\n");*/

    return lps[lp-1];

    /*int lt=strlen(t);
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