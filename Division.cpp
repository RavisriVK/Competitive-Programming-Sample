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
        ll p, q;
        cin>>p>>q;
        if(p<q) {
            cout<<p<<"\n";
        } else if(p==q) {
            if(q%2==0) cout<<(q/2)<<"\n";
            else {
                int flag=0;
                for(ll i=3; i*i<=q; i+=2) {
                    if(q%i==0) {
                        flag=1;
                        cout<<(q/i)<<"\n";
                        break;
                    }
                }
                if(!flag)
                    cout<<"1\n";
            }
        } else if(p%q!=0) {
            cout<<p<<"\n";
        } else {
            ll ans=1;
            ll qo=q;
            for(ll i=2; i*i<=q; i++) {
                if(q%i==0) {
                    ll qd=qo/i;
                    ll k=p/qo;
                    while(k>0 && k%i==0) k/=i;
                    ans=max(ans, k*qd);
                    while(q>0 && q%i==0) q/=i;
                }
            }
            if(q>1) {
                ll qo=q;
                ll i=q;
                if(q%i==0) {
                    ll qd=qo/i;
                    ll k=p/qo;
                    while(k>0 && k%i==0) k/=i;
                    ans=max(ans, k*qd);
                    while(q>0 && q%i==0) q/=i;
                }
            }
            cout<<ans<<"\n";
        }
    }
}