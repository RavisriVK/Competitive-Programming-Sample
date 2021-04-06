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
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a+b)%2==1) {
            if(a+d>0)
                cout << "Ya ";
            else 
                cout << "Tidak ";
            if(b+c>0)
                cout << "Ya ";
            else 
                cout << "Tidak ";
            cout << "Tidak Tidak\n";
        } else {
            cout << "Tidak Tidak ";
            if(b+c>0)
                cout << "Ya ";
            else 
                cout << "Tidak ";
            if(a+d>0)
                cout << "Ya ";
            else 
                cout << "Tidak ";
            cout << "\n";
        }
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