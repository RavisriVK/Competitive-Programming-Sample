#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll r, c;
    cin>>r>>c;
    if(r==1 && c==1) {
        cout<<"0\n";
        return 0;
    } else if(r==1) {
        for(int i=1; i<=c; i++)
            cout<<(i+1)<<" ";
        cout<<"\n";
        return 0;
    } else if(c==1) {
        for(int i=1; i<=r; i++)
            cout<<(i+1)<<"\n";
        return 0;
    }

    ll a[r][c];
    for(ll i=0; i<c; i++)
        a[0][i]=i+2;
    for(ll i=1; i<r; i++)
        a[i][0]=(c+1+i)*2;
    for(ll i=1; i<r; i++)
        for(ll j=1; j<c; j++)
            a[i][j]=a[i][0]*a[0][j]/2;
    for(ll i=0; i<r; i++) {
        for(ll j=0; j<c; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}