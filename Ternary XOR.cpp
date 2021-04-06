#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

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
        char a[n+1]; a[0]='1'; a[n]='\0';
        char b[n+1]; b[0]='1'; b[n]='\0';
        int t=0;
        for(int i=1; i<n; i++) {
            if(s[i]=='0') {
                a[i]='0'; b[i]='0';
            } else if(s[i]=='2') {
                if(t==0) { 
                    a[i]='1'; b[i]='1';
                } else {
                    a[i]='0'; b[i]='2';
                }
            } else {
                if(t==0) {
                    a[i]='1'; b[i]='0'; t=1;
                } else {
                    a[i]='0'; b[i]='1';
                }
            }
        }
        cout<<a<<"\n";
        cout<<b<<"\n";
    }
}