#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<unordered_map>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

char s[200001];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        cin>>s;
        int n=strlen(s);
        int ans=0;
        int moves[n];
        for(int i=0; i<n; i++) {
            if((i+2)<n && s[i]=='o' && s[i+1]=='n' && s[i+2]=='e') {
                moves[ans++]=i+2; i=i+2;
            } else if((i+4)<n && s[i]=='t' && s[i+1]=='w' && s[i+2]=='o' && s[i+3]=='n' && s[i+4]=='e') {
                moves[ans++]=i+3; i=i+4;
            } else if((i+2)<n && s[i]=='t' && s[i+1]=='w' && s[i+2]=='o') {
                moves[ans++]=i+2; i=i+2;
            }
        }
        cout<<ans<<"\n";
        for(int i=0; i<ans; i++)
            cout<<moves[i]<<" ";
        cout<<"\n";
    }
}