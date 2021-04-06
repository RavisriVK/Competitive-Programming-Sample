#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int a[n+1];
    int aXORb, aANDb, aXORc, aANDc, bANDc;
    cout<<"AND 1 2\n";
    cout.flush();
    cin>>aANDb;
    cout<<"XOR 1 2\n";
    cout.flush();
    cin>>aXORb;
    cout<<"AND 1 3\n";
    cout.flush();
    cin>>aANDc;
    cout<<"XOR 1 3\n";
    cout.flush();
    cin>>aXORc;
    cout<<"AND 2 3\n";
    cout.flush();
    cin>>bANDc;
    int bXORc=(aXORb)^(aXORc);

    // a+b=2*aANDb+aXORb
    int aSUMb=2*aANDb+aXORb;
    // b+c=2*bANDc+bXORc
    int bSUMc=2*bANDc+bXORc;
    // c+a=2*cANDa+cXORa
    int cSUMa=2*aANDc+aXORc;

    a[1]=((aSUMb+bSUMc+cSUMa)/2)-bSUMc;
    a[2]=aSUMb-a[1];
    a[3]=cSUMa-a[1];

    for(int i=4; i<=n; i++) 
    {
        cout<<"XOR 1 "<<i<<"\n";
        cout.flush();
        int temp; cin>>temp;
        a[i]=temp^a[1];
    }

    cout<<"! ";
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}