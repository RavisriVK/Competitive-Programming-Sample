#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

#define MOD 998244353
ll addMod(ll a, ll b);
ll mulMod(ll a, ll b);
ll powMod(ll a, ll b);

int pa[200001];
int a[200001];
int b[200001];
int bt[200001];
bool deleted[200001];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n, m;
        cin>>n>>m;
        memset(pa, 0, (n+1)*sizeof(int));
        memset(a, 0, (n+1)*sizeof(int));
        memset(b, 0, (m+1)*sizeof(int));
        memset(bt, 0, (n+1)*sizeof(int));
        memset(deleted, 0, (n+1)*sizeof(bool));

        for(int i=1; i<=n; i++) {
            cin>>a[i];
            pa[a[i]]=i;
        }
        for(int i=1; i<=m; i++) {
            cin>>b[i];
            bt[b[i]]=1;
        }
        ll ans=1;
        int lst=n, fst=1;
        for(int i=1; i<=m; i++) {
            int st=pa[b[i]];
            bt[b[i]]=0;
            int nxt=st+1, prv=st-1;
            while(nxt<=n && deleted[nxt]) nxt++;
            while(prv>=1 && deleted[prv]) prv--;
            /* cout<<"First "<<fst<<" Last "<<lst<<"\n";
            cout<<"Previous: "<<prv<<" "<<a[prv]<<" "<<bt[a[prv]]<<"\n";
            cout<<"Next: "<<nxt<<" "<<a[nxt]<<" "<<bt[a[nxt]]<<"\n\n"; */
            if(nxt>lst) {
                if(prv<fst || bt[a[prv]]==1) {
                    ans=0; break;
                } else {
                    lst=pa[b[i]];
                    deleted[prv]=true;
                }
            } else if(prv<fst) {
                if(nxt>lst || bt[a[nxt]]==1) {
                    ans=0; break;
                } else {
                    fst=pa[b[i]];
                    deleted[nxt]=true;
                }
            } else {
                if(bt[a[prv]]==1 && bt[a[nxt]]==1) {
                    ans=0; break;
                } else {
                    if(bt[a[prv]]==1) {
                        deleted[nxt]=true;
                        if(nxt==lst) lst=pa[b[i]];
                    } else if(bt[a[nxt]]==1) {
                        deleted[prv]=true;
                        if(prv==fst) fst=pa[b[i]];
                    } else {
                        ans=mulMod(ans, ((ll)2) );
                        deleted[nxt]=true;
                        if(nxt==lst) lst=pa[b[i]];
                    }
                }
            }
        }
        cout<<ans<<"\n";
    }
}

ll addMod(ll a, ll b) {
    a%=MOD; b%=MOD;
    return (a+b)%MOD;
}
ll mulMod(ll a, ll b) {
    a%=MOD; b%=MOD;
    return (a*b)%MOD;
}
ll powMod(ll a, ll b) {
    ll result=1; a%=MOD;
    while(b) {   if(b%2==1)  result*=a;     a*=a;     a%=MOD;     result%=MOD;    b/=2; }
    if(result<0) result+=MOD;
    return result;
}