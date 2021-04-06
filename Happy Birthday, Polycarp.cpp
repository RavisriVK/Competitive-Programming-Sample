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

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        char s[100];
        cin>>s;
        int n=strlen(s);
        int ans=(n-1)*9;
        ans+=(s[0]-'0')-1;
        char p[n+1]; p[n]='\0';
        for(int i=0; i<n; i++) p[i]=s[0];
        int n1=atoi(s); int n2=atoi(p);
        if(n1>=n2) ans++;
        cout<<ans<<"\n";
    }
}