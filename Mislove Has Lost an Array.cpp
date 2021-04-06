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
    int n, l, r;
    cin>>n>>l>>r;
    int mn= ((1<<l)+n)-(l+1);
    int mx= ((1<<r)-1)+((n-r)*(1<<(r-1)));
    cout<<mn<<" "<<mx<<"\n";
}