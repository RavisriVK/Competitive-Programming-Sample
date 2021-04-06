#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

void ans(ll n, ll add) {
    if(n<=2) {
        cout<<(add+1)<<" "<<(add+2)<<"\n";
    } else {
        ans(n-1, add+1);
        cout<<(add+1)<<" "<<(add+3)<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        ll n;
        cin>>n;
        cout<<"2\n";
        ans(n, 0);
    }
}