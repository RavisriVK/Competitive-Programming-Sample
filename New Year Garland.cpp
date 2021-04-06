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
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        ll r, g, b;
        cin>>r>>g>>b;
        if((g+b<r-1) || (b+r<g-1) || (r+g<b-1))
            cout<<"No\n";
        else 
            cout<<"Yes\n";
    }
}