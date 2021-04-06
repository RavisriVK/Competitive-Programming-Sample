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
        int n;
        cin>>n;
        char s[n+1];
        cin>>s;
        for(int i=0; i<n; i++)
            if(s[i]=='b') cout<<"b";
        for(int i=0; i<n; i++)
            if(s[i]!='b') cout<<s[i];
        cout<<endl;
    }
}