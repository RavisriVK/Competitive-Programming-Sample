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
        ll n, r1, r2;
        cin>>n>>r1>>r2;
        ll s=r1+r2;
        ll best=max((ll)1, min(n,1+s-n));
        ll worst=min(r1+ r2-1,n);
        cout<<best<<" "<<worst<<"\n";
    }
}