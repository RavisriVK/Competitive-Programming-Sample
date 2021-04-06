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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int b[n];
        for(int i=0; i<n; i+=2) {
            b[i]=(-1)*a[i+1];
            b[i+1]=a[i];
        }
        for(int i=0; i<n; i++)
            cout<<b[i]<<" ";
        cout<<"\n";
    }
}