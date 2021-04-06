#include<iostream>
#include<algorithm>
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
        cin>>a[0];
        int flag=0;
        for(int i=1; i<n; i++) {
            cin>>a[i];
            if(a[i]!=a[i-1])
                flag=1;
        }
        if(flag==0) {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";

        int el1=a[0]; int el2;
        for(int i=1; i<n; i++)
            if(a[i]!=el1) {
                el2=i+1;
                break;
            }
        for(int i=1; i<n; i++) {
            if(a[i]!=el1)
                cout<<"1 "<<(i+1)<<"\n";
            else 
                cout<<el2<<" "<<(i+1)<<"\n";
        }
    }
}