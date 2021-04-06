#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007
ll addMod(ll a, ll b);
ll mulMod(ll a, ll b);
ll powMod(ll a, ll b);


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    char s[1000001];
    cin>>s;
    ll n=strlen(s);
    ll vf[n];
    ll vb[n];
    ll f=0, b=0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='o'){vf[i]=f; continue;}
        ll j, cnt=0;
        for(j=i; j<n && s[j]=='v'; j++) {
            vf[j]=f+cnt;
            cnt++;
        }
        f+=cnt-1;
        i=max(i, j-1);
    }
    for(ll i=0; i<n; i++)
    {
        if(s[n-1-i]=='o'){vb[n-1-i]=b; continue;}
        ll j, cnt=0;
        for(j=i; j>=0 && s[n-1-j]=='v'; j++) {
            vb[n-1-j]=b+cnt;
            cnt++;
        }
        b+=cnt-1;
        i=max(i, j-1);
    }
    /*for(ll i=0; i<n; i++) 
        cout<<vb[i]<<" ";
    cout<<"\n";*/
    ll ans=0;
    for(ll i=1; i<n-1; i++)
    {
        //cout<<s[i];
        if(s[i]!='o') continue;
        ll cnt=0, j;
        for(j=i; j<n-1 && s[j]=='o'; j++)
            cnt++;
        //printf("<%d %d>", vf[i], vb[j-1]);
        ans+= cnt * vf[i] * vb[j-1];
        i=max(i, j-1);
    }
    cout<<ans<<"\n";
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