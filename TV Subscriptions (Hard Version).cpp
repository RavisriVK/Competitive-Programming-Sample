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

int a[200001];
int f[1000001];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n, k, d;
        cin>>n>>k>>d;
        for(int i=0; i<n; i++)
            cin>>a[i];
        int z=k;
        memset(f, 0, k*sizeof(int));
        for(int i=0; i<d; i++) {
            f[a[i]-1]++;
            if(f[a[i]-1]==1) z--;
        }
        int ans=k-z;
        for(int i=1; (i+d-1)<n; i++) {
            if((f[a[i-1]-1]--)==1) z++;
            if((f[a[i+d-1]-1]++)==0) z--;
            ans=min(ans, k-z);
        }
        cout<<ans<<"\n";
    }
}