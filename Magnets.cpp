#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char s[3];
    int segmentCount=1;
    cin>>s;
    char endType=s[1];
    for(int i=1; i<n; i++) {
        cin>>s;
        if(s[1]!=endType) {
            segmentCount++;
            endType=s[1];
        }
    }
    cout<<segmentCount<<endl;
}