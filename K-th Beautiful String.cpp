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
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        ll n, k;
        cin>>n>>k;
        char s[n+1]; s[n]='\0';
        for(ll i=0; i<n; i++)
            s[i]='a';
        double dd1=ceil(0.5+sqrt(0.25+2.0*k));
        ll d1=(ll)dd1;
        ll t=(d1-1)*(d1-2)/2;
        //cout<<d1<<" "<<t<<"\n";
        ll d2=k-t;
        s[n-d1]='b';
        s[n-d2]='b';
        cout<<s<<"\n";
    }
}