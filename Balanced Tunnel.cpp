#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int cmp(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int en[n+1]; int in;
    int b[n+1];
    for(int i=1; i<=n; i++) {
        cin>>in;
        en[in]=i;
    }
    for(int i=1; i<=n; i++) {
        cin>>in;
        b[i]=en[in];
    }
    int ma[n+1];
    ma[n]=b[n];
    for(int i=n-1; i>=1; i--)
        ma[i]=min(ma[i+1], b[i]);
    int ans=0;
    for(int i=1; i<n; i++)
        if(b[i]>ma[i+1])
            ans++;
    cout<<ans<<"\n";
}