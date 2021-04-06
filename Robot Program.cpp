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
        int x, y;
        cin>>x>>y;
        int mn=min(x, y);
        int mx=max(x, y);
        int ans;
        if(mx>mn) {
            ans=mn+mn+1 + (x + y - mn - mn - 1)*2;
        } else {
            ans=x+y;
        }
        cout<<ans<<"\n";
    }
}