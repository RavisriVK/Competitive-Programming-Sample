#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[200001]={0};
ll s[200001]={0};
ll n, q;

ll fact[16]={1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 6227020800, 87178291200, 1307674368000};

void getnextperm(ll nxt) {
    ll m=min(n, (ll)15);
    vector<ll> available(m);
    for(ll i=n-m+1; i<=n; i++)
        available[i+m-n-1]=i;
    ll ind;
    for(ll i=n-m+1; i<=n; i++) {
        ind=0;
        while(nxt > fact[n-i]) {
            nxt-=fact[n-i];
            ind++;
        }
        a[i]=available[ind];
        /*for(ll i=1; i<=n; i++)
            cout<<a[i]<<" ";
        cout<<"\n";*/
        available.erase(available.begin() + ind);
    }
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>q;
    for(ll i=1; i<=n; i++)
        a[i]=i;
    for(ll i=1; i<=n; i++)
        s[i]=s[i-1]+a[i];

    ll cp=1;

    for(int i=1; i<=q; i++) {
        int option;
        cin>>option;
        if(option==2) {
            ll don;
            cin>>don;
            getnextperm(cp+don);
            cp+=don;
            ll m=min(n, (ll)15);
            for(ll k=n-m+1; k<=n; k++)
                s[k]=s[k-1]+a[k];
            /*for(ll i=1; i<=n; i++)
                cout<<a[i]<<" ";
            cout<<"\n";*/
        } else {
            ll a, b;
            cin>>a>>b;
            ll ans=s[b]-s[a-1];
            cout<<ans<<"\n";
        }
    }
}