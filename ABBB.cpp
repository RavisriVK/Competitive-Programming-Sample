#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stack>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        char s[200001];
        cin>>s;
        int n=strlen(s);
        int ls=0;
        for(int i=0; i<n; i++) {
            if(s[i]=='A' || ls==0)
                ls++;
            else
                ls--;
        }
        cout<<ls<<"\n";
    }
}