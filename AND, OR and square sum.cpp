#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(ll &a, ll &b) {
    return a>b;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n, cmp);
    for(int i=n-1; i>=1; i--) {
        ll orVal=a[0]|a[i];
        ll andVal=a[0]&a[i];
        a[0]=orVal;
        a[i]=andVal;
    }
    ll sum=0;
    for(int i=0; i<n; i++) {
        sum+=a[i]*a[i];
    }
    cout<<sum<<endl;
}