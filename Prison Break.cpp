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
        int n, m, r, c;
        cin>>n>>m>>r>>c;
        int ans=max(max(abs(r-1)+abs(c-1), abs(r-1)+abs(c-m)), max(abs(r-n)+abs(c-1), abs(r-n)+abs(c-m)));
        cout<<ans<<endl;
    }
}