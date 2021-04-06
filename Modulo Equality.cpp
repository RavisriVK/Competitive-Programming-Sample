#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>

using namespace std;

typedef long long ll;

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}

int cmp1(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}

int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n], c[n];
    for(ll i=0; i<n; i++) {
        cin >> a[i];
        c[i]=a[i];
    }
    ll b[n];
    for(ll i=0; i<n; i++)
        cin >> b[i];
    sort(b, b+n);

    ll ans=1e9 + 66555;
    for(ll i=0; i<n; i++) {
        ll x=(b[0]+m-c[i])%m;
        for(ll j=0; j<n; j++)
            a[j]=(c[j]+x)%m;
        sort(a, a+n);
        int flag=0;
        for(ll j=0; j<n; j++)
            if(a[j]!=b[j]) {flag=1; break;}
        if(flag==0) {
            ans=min(ans, x);
        }
    }
    cout << ans << "\n";
}