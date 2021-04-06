#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char s[200001];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        cin>>s;
        int n=strlen(s);
        int o1=0, c1=0, cnt1=0, o2=0, c2=0, cnt2=0;
        for(int i=0; i<n; i++) {
            int c=s[i];
            if(c=='(' || c==')') {
                if(c=='(') {
                    o1++;
                } else {
                    if(o1>0) {
                        o1--; cnt1++;
                    } 
                }
            } else {
                if(c=='[') {
                    o2++;
                } else {
                    if(o2>0) {
                        o2--; cnt2++;
                    } 
                }
            }
        }
        int ans=cnt1+cnt2;
        cout<<ans<<"\n";
    }
}