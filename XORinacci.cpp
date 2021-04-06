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
        unsigned int a, b, n;
        cin>>a>>b>>n;
        unsigned int xorr=a^b;
        unsigned int ans;
        if(n%3==0)  
            ans=a;
        else if(n%3==1) 
            ans=b;
        else 
            ans=xorr;
        cout<<ans<<endl;
    }
}