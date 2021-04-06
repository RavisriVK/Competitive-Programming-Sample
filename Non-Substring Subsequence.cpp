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
        int n, q;
        cin>>n>>q;
        char s[n+1];
        cin>>s;
        int a1[n]; a1[0]=0;
        int a2[n]; a2[n-1]=0;
        for(int i=1; i<n; i++) {
            a1[i]=a1[i-1]+(s[i-1]=='0'?1:0);
            a2[n-1-i]=a2[n-i]+(s[n-i]=='0'?1:0);
        }
        /*for(int i=0; i<n; i++)
            cout<<a1[i]<<" ";
        cout<<"\n";
        for(int i=0; i<n; i++)
            cout<<a2[i]<<" ";
        cout<<"\n";*/
        for(int k=0; k<q; k++)
        {
            int l, r;
            cin>>l>>r;
            l--; r--;
            bool ans=false;
            if(l>0) {
                if(s[l]=='0' && a1[l]>0)
                    ans=true;
                else if(s[l]=='1' && (l-a1[l])>0)
                    ans=true;
            }
            if(r<n-1) {
                if(s[r]=='0' && a2[r]>0)
                    ans=true;
                else if(s[r]=='1' && (n-1-r-a2[r])>0)
                    ans=true;
            }
            if(ans) cout<<"Yes\n"; else cout<<"NO\n";
        }
    }
}