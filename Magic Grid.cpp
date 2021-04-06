#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin>>n;
    int a[n][n];
    int st=0;
    for(int i=0; i<n; i+=4) {
        for(int j=0; j<n; j+=4) {
            a[i][j]=st; a[i][j+1]=st+4; a[i][j+2]=st+8; a[i][j+3]=st+12;
            a[i+1][j]=st+1; a[i+1][j+1]=st+5; a[i+1][j+2]=st+9; a[i+1][j+3]=st+13;
            a[i+2][j]=st+2; a[i+2][j+1]=st+6; a[i+2][j+2]=st+10; a[i+2][j+3]=st+14;
            a[i+3][j]=st+3; a[i+3][j+1]=st+7; a[i+3][j+2]=st+11; a[i+3][j+3]=st+15;
            st+=16;
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}