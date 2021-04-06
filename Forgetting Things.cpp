#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<unordered_map>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll a, b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<a<<"0 "<<b<<"1\n";
    }
    else if(a+1==b)
    {
        cout<<a<<"9 "<<b<<"0\n";
    }
    else if(a==9 && b==1)
    {
        cout<<"99 100\n";
    }
    else 
    cout<<"-1\n";
}