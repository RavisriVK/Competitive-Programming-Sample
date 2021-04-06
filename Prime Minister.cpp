#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007
ll addMod(ll a, ll b);
ll mulMod(ll a, ll b);
ll powMod(ll a, ll b);

int cmp(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}

int main()
{

    int n;
    cin>>n;
    int a[n]; int b[n]; int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        b[i]=i+1;
    }
    if(2*a[0]>sum)
    {
        cout<<"1\n1\n";
        return 0;
    }
    for(int i=0; i<n-2; i++)
        for(int j=0; j<n-12-i; j++)
            if(a[j+1]>a[j+2])
            {
                int temp=a[j+1];
                a[j+1]=a[j+2];
                a[j+2]=temp;
                temp=b[j+1];
                b[j+1]=b[j+2];
                b[j+2]=temp;
            }

    //for(int i=0; i<n; i++)
    //    cout<<a[i]<<" "<<b[i]<<"\n";
    int ar[n]; ar[0]=1; int k=1; int ch=a[0];
    for(int i=1; i<n; i++)
    {
        if(2*a[i]<=a[0])
        {
            ch+=a[i];
            ar[k]=b[i];
            k++;
        }
    }
    if(2*ch<=sum) {
        cout<<"0\n";
        return 0;
    } else {
        cout<<k<<"\n";
        for(int i=0; i<k; i++)
            cout<<ar[i]<<" ";
        cout<<"\n";
    }
}

ll addMod(ll a, ll b) {
    a%=MOD; b%=MOD;
    return (a+b)%MOD;
}
ll mulMod(ll a, ll b) {
    a%=MOD; b%=MOD;
    return (a*b)%MOD;
}
ll powMod(ll a, ll b) {
    ll result=1; a%=MOD;
    while(b) {   if(b%2==1)  result*=a;     a*=a;     a%=MOD;     result%=MOD;    b/=2; }
    if(result<0) result+=MOD;
    return result;
}