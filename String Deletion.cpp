#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int blocks(char *a, int *b, int n)
{
    b[0]=1;
    int bp=1;
    for(int i=1; i<n; i++) {
        if(a[i]==a[i-1])
            b[bp-1]++;
        else 
            b[bp++]=1;
    }
    return bp;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n;
        cin>>n;
        char s[n+1];
        cin>>s;
        int b[n];
        int bp=blocks(s, b, n);
        /*for(int i=0; i<bp; i++)
            cout<<b[i]<<" ";
        cout<<"\n";*/
        int moves=0; int st=0;
        for(int i=0; i<bp; i++) {
            if(b[i]<=1) {
                st=max(st, i+1);
                for( ; st<bp && b[st]==1; st++)
                    ;
                if(st>=bp) {
                    i++;
                } else {
                    b[st]--;
                }
            }
            moves++;
        }
        cout<<moves<<"\n";
    }
}