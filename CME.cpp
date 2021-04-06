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
        int ans=0;
        if(n>=4 && n%2==1)
            ans++;
        else if(n<4)
            ans=4-n;
        cout<<ans<<"\n";
    }
}