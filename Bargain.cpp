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
    char s[200000];
    cin >> s;
    ll n=strlen(s);

    if(n==1) {
        cout << "0\n";
        return 0;
    } else if(n==2) {
        cout << (s[0]+s[1]-'0'-'0') << "\n";
        return 0;
    }

    ll p10[n+1];
    ll s10[n+1];
    p10[0]=1; s10[0]=1;
    for(ll i=1; i<=n; i++) {
        p10[i]=mulMod(p10[i-1],10);
        s10[i]=addMod(s10[i-1], p10[i]);
    }

    ll pref[n]; pref[0]=s[0]-'0';
    ll prefSum[n]; prefSum[0]=s[0]-'0';
    for(ll i=1; i<n; i++) {
        pref[i]=addMod(mulMod(pref[i-1], 10), s[i]-'0');
        prefSum[i]=addMod(prefSum[i-1], pref[i]);
    }
    
    ll suff[n]; suff[n-1]=s[n-1]-'0';
    ll suffSum[n]; suffSum[n-1]=s[n-1]-'0';
    for(ll i=n-2; i>=0; i--) {
        suff[i]=addMod(suff[i+1], mulMod(s[i]-'0', p10[n-1-i]));
        suffSum[i]=addMod(suffSum[i+1], suff[i]);
    }
    /*for(ll i=0; i<n; i++)
        cout << suff[i] << " ";
    cout << "\n";
    for(ll i=0; i<n; i++)
        cout << suffSum[i] << " ";
    cout << "\n";*/

    ll ans=addMod(prefSum[n-2], suffSum[1]);
    for(ll i=1; i<n-1; i++) {
        ans+=mulMod(pref[i-1], s10[n-1-i]-1);
        ans=addMod(ans, suffSum[i+1]);
    }
    cout << ans << "\n";
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