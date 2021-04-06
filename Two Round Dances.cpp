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
    ll n;
    cin>>n;
    ll ans=1;
    for(ll i=1; i<n; i++)
    {
        if(i!=(n/2))
            ans*=i;
    }
    cout<<ans<<"\n";
}