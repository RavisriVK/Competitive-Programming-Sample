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
    int in;
    int b[n];
    int fo=0;
    for(int i=0; i<n; i++) {
        cin>>in;
        if(in%2==0) {
            b[i]=in/2;
        } else if(fo%2==0) {
            b[i]=(in+1)/2;
            fo++;
        } else {
            b[i]=(in-1)/2;
            fo++;
        }
    }
    for(int i=0; i<n; i++) 
        cout<<b[i]<<"\n";
}