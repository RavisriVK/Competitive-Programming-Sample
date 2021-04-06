#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>


using namespace std;

typedef long long ll;

int main()
{
    ll n, m, ta, tb, K;
    cin >> n >> m >> ta >> tb >> K;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
        a[i]+=ta;
    }
    ll b[m];
    for(ll i=0; i<m; i++)
        cin >> b[i];

    if(K>=n) {
        cout << "-1\n";
        return 0;
    }

    ll ans=0;
    for(ll k=0; k<=min(K,n-1); k++) 
    {
        ll low=0, high=m-1, middle=(m-1)/2;
        while(low<high-1) 
        {
            if(a[k]>b[middle]) {
                low=middle;
            } else {
                high=middle;
            }
            middle=(low+high)/2;
        }
        ll start=low;
        if(a[k]>b[low])
            start=high;
        ll rem=K-k;
        ll remTill=start+rem;
        if(remTill>=m || a[k]>b[high]) {
            cout << "-1\n";
            return 0;
        }
        ans=max(ans, b[remTill]+tb);
    }
    cout << ans << "\n";
}