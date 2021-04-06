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
        ll n;
        cin>>n;
        if(n%3==0) {
            cout<<(n/3)<<" 0 0\n";
        } else if(n%3==1 && n>=7) {
            cout<<((n-7)/3)<<" 0 1\n";
        } else if(n%3==2 && n>=5) {
            cout<<((n-5)/3)<<" 1 0\n";
        } else {
            cout<<"-1\n";
        }
    }
}