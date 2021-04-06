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
        double x, y, a, b;
        cin>>x>>y>>a>>b;
        if( ((y-x)/(a+b)) == floor( ((y-x)/(a+b)) )) {
            ll ans= (ll)((y-x)/(a+b));
            cout<<ans<<endl;
        } else {
            cout<<"-1\n";
        }
    }
}