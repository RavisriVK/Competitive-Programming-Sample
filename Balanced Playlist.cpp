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
    int n;
    cin>>n;
    int a[n];
    int mx=0;
    for(int i=0; i<n; i++) {
        cin>>a[i]; mx=max(mx, a[i]);
    }
    int flag=1;
    for(int i=0; i<n; i++) {
        if((mx+1)/2 > a[i]) {
            flag=0; break;
        }
    }
    if(flag) {
        for(int i=0; i<n; i++) cout<<"-1 ";
        cout<<"\n"; return 0;
    }
    int ans[n];
    for(int j=0; j<n; j++) {
        if(j==0 || a[n-1-j]>a[n-j]) {
            int lst=a[n-j-1]; int cnt=1; int tp=lst;
            for(int i=0; true; i++) {
                if(a[(n-j+i)%n]>=(tp+1)/2) {
                    cnt++; tp=max(a[(n-j+i)%n], tp);
                } else 
                    break;
            }
            ans[n-j-1]=cnt;
        } else {
            ans[n-j-1]=ans[n-j]+1;
        }
    }
    /*for(int i=n-2; i>=0; i--) {
        if(a[i+1]>=(a[i]+1)/2)
            ans[i]=ans[i+1]+1;
        else 
            ans[i]=1;
    }*/
    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
    cout<<"\n"; return 0;
}