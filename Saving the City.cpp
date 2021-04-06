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

int block[100001];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int a, b;
        cin>>a>>b;
        char s[100001];
        cin>>s;
        int n=strlen(s);
        memset(block, 0, sizeof(int)*100001);
        int p=0; block[p]=1;
        for(int i=1; i<n; i++) {
            if(s[i]!=s[i-1])
                p++;
            block[p]++; 
        }
;       int st=0;
        if(s[0]=='0') st=1;
        int ans=0;
        for(int i=st; i<=p; i+=2) {
            ans+=a;
            if(i+1<p)
                ans+=min(0, block[i+1]*b - a);
        } 
        cout<<ans<<"\n";
    }
}