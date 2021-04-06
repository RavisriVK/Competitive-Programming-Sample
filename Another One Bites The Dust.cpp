#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>

using namespace std;

typedef long long ll;

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}

int cmp1(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans=2*c+2*min(a,b);
    if(abs(a-b)>=1)
        ans+=1;
    cout << ans << "\n";
}