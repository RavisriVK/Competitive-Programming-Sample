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
        char s[n+1];
        cin>>s;
        int l=0, r=0;
        for(int i=0; i<n; i++)
            if(s[i]=='>') r++; else if(s[i]=='<') l++;
        if(l==0 || r==0) {
            cout<<n<<"\n";
            continue;
        }
        int start=0;
        int g=0;
        for(int i=0; i<n; i++) {
            if(s[(n+i-1)%n]=='-' || s[(i)%n]=='-')
                g++;
        }
        cout<<g<<"\n";
    }
}