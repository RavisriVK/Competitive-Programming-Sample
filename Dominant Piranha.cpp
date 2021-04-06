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
        int a[n];
        int mx=0; int mxd=0;
        for(int i=0; i<n; i++)
        {
           cin>>a[i];
           if(a[mxd]<=a[i])
           {
               mx=a[i];
               mxd=i;
           }
        }
        if(n==1)
        {
            cout<<"1\n";
            continue;
        }
        int flag=-1;
        //cout<<mx<<"#";
        for(int i=0; i<n; i++)
            if(a[i]!=mx)
            {
                flag=1;
                break;
            }
        if(flag==-1) {
            cout<<"-1\n";
            continue;
        }
        
        if(a[0]==mx)
        {
            int f=1;
            while(f<n && a[f]==mx)
                f++;
            cout<<(f)<<"\n";
        } 
        else
        {
            int f=1;
            while(f<n && a[f]<mx)
                f++;
            cout<<(f+1)<<"\n";
        }
        
    }
}