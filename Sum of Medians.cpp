#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        ll n, k;
        cin>>n>>k;
        ll nn=n*k;
        ll a[nn];
        for(ll i=0; i<nn; i++)
            cin>>a[i];
        ll st=0;
        ll inc=1+n/2;
        ll sum=0;
        for(ll i=1; i<=k; i++) {
            st+=inc;
            sum+=a[nn-st];
        }
        cout<<sum<<"\n";
    }
}