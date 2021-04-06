#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int rs=0;
    int maxs=0;
    for(int i=0; i<n; i++)
    {
        rs+=a[i];
        if(rs<0)
            rs=0;
        maxs=max(maxs, rs);
    }
    cout<<maxs<<"\n";
}