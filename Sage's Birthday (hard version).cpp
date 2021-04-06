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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        int b[n]; int l=-1, r=-2;
        for(int i=0; i<n/2*2; i++)
            if(i%2==0)
                b[i]=a[l+=2];
            else 
                b[i]=a[r+=2];
        if(n%2==1) b[n-1]=a[n-1];
        for(int i=1; i<n-1; i+=2) {
            if(b[i-1]==b[i] || b[i]==b[i+1]) {
                int j=i-1;
                for( ; j>=0 && !(b[i]>b[j] && (j==0 || b[j-1]!=b[i]) && b[j+1]!=b[i]) ; j-=2)
                    ;
                if(j>=0)
                    swap(b[i], b[j]);
            }
        }
        int ans=0;
        for(int i=1; i<n-1; i++) 
            if(b[i-1]>b[i] && b[i+1]>b[i])
                ans++;
        cout<<ans<<"\n";
        for(int i=0; i<n; i++)
            cout<<b[i]<<" ";
        cout<<"\n";
}