#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    
        int n;
        cin>>n;
        int c[n];
        for(int i=0; i<n; i++)
            cin>>c[i];
        int i1;
        for(i1=n-1; i1>=0 && c[i1]==c[0]; i1--)
            ;
        int i2;
        for(i2=0; i2<n && c[i2]==c[n-1]; i2++)
            ;
        int ans=max(n-1-i2, i1);
        cout<<ans<<endl;
    
}