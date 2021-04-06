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

int blocks(int *a, int *b, int n)
{
    b[0]=1;
    int bp=1;
    for(int i=1; i<n; i++) {
        if(a[i]==a[i-1])
            b[bp-1]++;
        else 
            b[bp++]=1;
    }
    return bp;
}

int dothis(int *a, int d) {
    int b[d];
    for(int i=0; i<d; i++)
        b[i]=a[i];
    int c[d];
    sort(b, b+d);
    //for(int i=0; i<d; i++)
    //.    cout<<b[i]<<" ";
    //cout<<"\n";
    int ds=blocks(b, c, d);
    return ds;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n, k, d;
        cin>>n>>k>>d;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int flag=d;
        for(int i=0; i+d-1<n; i++) {
            int temp=dothis(a+i, d);
            //cout<<temp<<"\n";
            flag=min(flag,temp );
        }
            cout<<flag<<"\n";
    }
}