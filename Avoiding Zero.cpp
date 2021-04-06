#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int cmp(const void *a, const void *b)
{
    return ((*(int *)a))-((*(int *)b));
}

int cmp1(const void *a, const void *b)
{
    return ((*(int *)b))-((*(int *)a));
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
        ll a[n]; ll sum=0;
        for(ll i=0; i<n; i++) {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum==0) {
            cout<<"NO\n";
        } else if(sum>0) {
            qsort(a, n, sizeof(long long), cmp1);
            cout<<"YES\n";
            for(ll i=0; i<n; i++)
                cout<<a[i]<<" ";
            cout<<"\n";
        } else {
            qsort(a, n, sizeof(long long), cmp);
            cout<<"YES\n";
            for(ll i=0; i<n; i++)
                cout<<a[i]<<" ";
            cout<<"\n";
        }
    }
}