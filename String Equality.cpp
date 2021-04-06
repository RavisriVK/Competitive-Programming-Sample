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
        int n, k;
        cin>>n>>k;
        char a[n+1];
        cin>>a;
        char b[n+1];
        cin>>b;
        int a1[26]; memset(a1, 0, 26*sizeof(int));
        int a2[26]; memset(a2, 0, 26*sizeof(int));
        for(int i=0; i<n; i++) {
            a1[a[i]-'a']++;
            a2[b[i]-'a']++;
        }
        bool ans=true;
        if(a1[25]>a2[25]) {
            ans=false;
        } else {
            for(int i=0; i<25; i++) {
                if(a1[i]<a2[i] || (a1[i]-a2[i])%k!=0) {
                    //cout<<"DB\n";
                    ans=false;
                    break;
                }
                a1[i+1]+=a1[i]-a2[i];
                a1[i]=a2[i];
            }
            if(a1[25]!=a2[25]) {
                //cout<<"DB1\n";
                ans=false;  
            }
        }
        if(ans) cout<<"yes\n"; else cout<<"no\n";
    }
}