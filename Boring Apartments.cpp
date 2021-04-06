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
        char s[10];
        cin>>s;
        int n=strlen(s);
        int d=s[0]-'0';
        int ans=(d-1)*10 + (n*(n+1)/2);
        cout<<ans<<"\n";
    }
}