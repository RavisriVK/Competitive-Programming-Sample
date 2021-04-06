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
    char s[102];
    cin>>s;
    int n=strlen(s);
    if(n==1){
        cout<<"0\n"; return 0;
    }
    if(n==2) {
        cout<<"1\n"; return 0;
    }
    int ans=(n+1)/2;
    int flag=-1;
    for(int i=1; i<n; i++)
    {
        if(s[i]!='0') {
            flag=0; break;
        }
    }
    if(n%2==0)
        flag=0;
    ans+=flag;
    cout<<ans<<"\n";
}