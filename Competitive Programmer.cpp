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
        char s[101];
        cin>>s;
        int n=strlen(s);
        int ev=0, z=0, sm=0, o=0;
        for(int i=0; i<n; i++) {
            int t=(s[i]-'0');
            sm+=t;
            if(t%2==0) {
                if(t==0) z++;
                else ev++;
            } else o++;
        }
        if(sm%3==0 && z>=1 && (ev>=1 || z>=2))
            cout<<"red\n";
        else 
            cout<<"cyan\n";
    }
}