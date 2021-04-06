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
    int n;
    cin >>n;
    int a[n+1];
    int N=n-(n%3);
    int sum=0;
    for(int i=1; i<N; i+=3) {
        int x,y,z;
        cout << "? " << i << " " << i+1 << "\n";
        fflush(stdout);
        cin >> x;
        cout << "? " << i+1 << " " << i+2 << "\n";
        fflush(stdout);
        cin >> y;
        cout << "? " << i << " " << i+2 << "\n";
        fflush(stdout);
        cin >> z;
        a[i]=z-y;
        a[i+1]=x+y-z;
        a[i+2]=z-x;
        sum+=z;
    }
    for(int i=0; i<n%3; i++) {
        int x;
        cout << "? 1 " << N+i+1 << "\n";
        fflush(stdout);
        cin >> x;
        a[N+i+1]=x-sum;
        sum=x;
    }
    cout << "! ";
    for(int i=1; i<=n; i++)
        cout << a[i] << " ";
    cout << "\n";
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