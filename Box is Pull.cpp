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
        int a1, b1, a2, b2;
        cin>>a1>>b1>>a2>>b2;
        if(a1==a2)
            cout<<(abs(b1-b2))<<"\n";
        else if(b1==b2)
            cout<<(abs(a1-a2))<<"\n";
        else
            cout<<(2+abs(a1-a2)+abs(b1-b2))<<"\n";
        
    }
}