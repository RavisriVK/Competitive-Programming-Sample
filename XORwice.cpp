#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        ll a,b;
        cin>>a>>b;
        ll p=1;
        ll ans=0;
        while(a>0 || b>0)
        {
            ll d1=a%2;
            ll d2=b%2;
            ans+=(d1^d2)*p;
            p*=2;
            a/=2; b/=2;
        }
        cout<<ans<<"\n";
    }
}