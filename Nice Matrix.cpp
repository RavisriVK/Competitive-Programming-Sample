#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>

using namespace std;

typedef long long ll;

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n][m];
        ll b[n][m];
        for(ll i=0; i<n; i++)
            for(ll j=0; j<m; j++)
                cin >> a[i][j];

        ll ans=0;
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<m; j++) {
                ll ar[4];
                ar[0]=a[i][j];
                ar[1]=a[n-1-i][j];
                ar[2]=a[i][m-1-j];
                ar[3]=a[n-1-i][m-1-j];
                sort(ar, ar+4);
                //cout << ar[0] << " " << ar[1] << " " << ar[2] << " " << ar[3];
                ans+=abs(a[i][j]-ar[1]);
            }
            //cout << "\n";
        }
        cout << ans << "\n";
    }
}