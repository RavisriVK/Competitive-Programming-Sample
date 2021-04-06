#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int cmp(const void *a, const void *b)
{
    return ((*(ll *)b))-((*(ll *)a));
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        ll n, k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0; i<n; i++)
            cin>>a[i];
        qsort(a, n, sizeof(ll), cmp);
        ll sum=a[0];
        for(ll i=1; i<k+1; i++)
            sum+=a[i];
        cout<<sum<<"\n";
    }
}