#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        char s[101]; char t[101];
        cin>>s>>t;
        int f1[26]={0}; int f2[26]={0};
        for(int i=0; i<strlen(s); i++) {
            f1[s[i]-'a']++; f2[t[i]-'a']++;
        }
        int flag=0;
        for(int i=0; i<26; i++) {
            if(f1[i]!=0 && f2[i]!=0)
            { flag=1; break;}
        }
        if(flag) cout<<"YES\n"; else cout<<"NO\n";
    }
}