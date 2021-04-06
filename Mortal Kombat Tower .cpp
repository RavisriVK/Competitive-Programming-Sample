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
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n;
        cin>>n;
        int a[n];
        int ans=0;
        for(int i=0; i<n; i++)
            cin>>a[i];
        int turn=0;
        for(int i=0; i<n; i++)
        {
            if(turn==0)
            {
                if(a[i]!=0) {
                    ans++;
                    if((i+1)<n && a[i+1]==0) {
                        i++;
                        while(i<n && a[i]==0) i++;
                        i--;
                    }
                } else {
                    while(i<n && a[i]==0) i++;
                    i--;
                }
                turn=1;
            }
            else
            {
                if(a[i]==1) {
                    if((i+1)<n && a[i+1]==1)
                        i++;
                } else {
                    if((i+1)<n && a[i+1]==1)
                        i++;
                }
                turn=0;
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