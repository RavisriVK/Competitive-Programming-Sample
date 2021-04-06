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

int cmp(const void *a, const void *b)
{
    return (((ll *)a)[0])-(((ll *)b)[0]);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n;
        cin>>n;
        ll a[n][2];
        for(int i=0; i<n; i++)
            cin>>a[i][0];
        for(int i=0; i<n; i++)
            cin>>a[i][1];
        qsort(a, n, sizeof(ll[2]), cmp);
        for(int i=n-2; i>=0; i--)
            a[i][1]+=a[i+1][1];
        /*for(int i=0; i<n; i++)
            cout<<a[i][0]<<" ";
        cout<<"\n";
        for(int i=0; i<n; i++)
            cout<<a[i][1]<<" ";
        cout<<"\n";*/
        ll ans=min(a[n-1][0], a[0][1]);
        for(int i=n-2; i>=0; i--)
            ans=min(ans, max(a[i][0], a[i+1][1]));
        cout<<ans<<"\n";
    }
}