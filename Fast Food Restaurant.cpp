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
        int a,b,c;
        cin>>a>>b>>c;
        int n=0;
        if(a>=1) {n++; a--;}
        if(b>=1) {n++; b--;}
        if(c>=1) {n++; c--;}
        int A=max(max(a,b),c); int C=min(min(a,b),c); int B=(a+b+c)-(A+C);
        a=A; b=B; c=C;
        if(a>0 && b>0) {a--; b--; n++;}
        if(a>0 && c>0) {a--; c--; n++;}
        if(b>0 && c>0) {b--; c--; n++;}
        if(a>0 && b>0 && c>0) {n++;}
        cout<<n<<"\n"; continue;
    }
}