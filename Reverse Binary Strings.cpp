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
        char s[n+1];
        cin>>s;
        int zeroEven=0, zeroOdd=0, oneEven=0, oneOdd=0;
        for(int i=0; i<n; i++) {
            if(s[i]=='0' && i%2==0)
                zeroEven++;
            else if(s[i]=='0')
                zeroOdd++;
        }
        oneEven=zeroOdd;
        oneOdd=zeroEven;
        int a1=2*zeroEven;
        int a2=2*zeroOdd;
        for(int i=0; i+1<n; i++) {
            if(s[i]=='0' && s[i+1]=='1') {
                if(i%2==0)
                    a1--;
                else 
                    a2--;
            } else if(s[i]=='1' && s[i+1]=='0') {
                if(i%2==0)
                    a2--;
                else 
                    a1--;
            }
        }
        int ans=min(a1,a2);
        cout<<ans<<"\n";
    }
}