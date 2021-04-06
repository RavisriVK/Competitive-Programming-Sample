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

void swap(int *a, int i1, int i2);

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int p[n+1];
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        p[a[i]]=i;
    }
    int moves[5*n][2];
    int cnt=0;

    for(ll i=1; i<=n; i++) {
        if(p[i]==i) continue;
        int hold=a[i];
        if(abs(p[i]-i)>=n/2) {
            moves[cnt][0]=i;
            moves[cnt][1]=p[i];
            cnt++;
            swap(a,i,p[i]);
        } else if((p[i]<=n/2 && i<=n/2) || (p[i]>n/2 && i>n/2)) {
            int d;
            if(i>n/2) d=1; else d=n;
            moves[cnt][0]=i;
            moves[cnt][1]=d;
            cnt++;
            swap(a,i,d);

            moves[cnt][0]=p[i];
            moves[cnt][1]=d;
            cnt++;
            swap(a,d,p[i]);

            moves[cnt][0]=i;
            moves[cnt][1]=d;
            cnt++;
            swap(a,i,d);
        } else {
            int d1, d2;
            if(i>n/2) d1=1; else d1=n;
            if(p[i]>n/2) d2=1; else d2=n;

            moves[cnt][0]=i;
            moves[cnt][1]=d1;
            cnt++;
            swap(a,i,d1);

            moves[cnt][0]=d2;
            moves[cnt][1]=d1;
            cnt++;
            swap(a,d2,d1);

            moves[cnt][0]=d2;
            moves[cnt][1]=p[i];
            cnt++;
            swap(a,d2,p[i]);

            moves[cnt][0]=d2;
            moves[cnt][1]=d1;
            cnt++;
            swap(a,d2,d1);

            moves[cnt][0]=i;
            moves[cnt][1]=d1;
            cnt++;
            swap(a,i,d1);
        }
        p[hold]=p[i];
        p[i]=i;
    }
    cout << cnt << "\n";
    for(int i=0; i<cnt; i++) {
        cout << moves[i][0] << " " << moves[i][1] << "\n";
    }
}

void swap(int *a, int i1, int i2) {
    int temp=a[i1];
    a[i1]=a[i2];
    a[i2]=temp;
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