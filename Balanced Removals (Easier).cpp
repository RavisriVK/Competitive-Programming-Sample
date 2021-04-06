#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int cmp(const void *a, const void *b)
{
    if( (((int *)a)[0])-(((int *)b)[0]) != 0 )
        return (((int *)a)[0])-(((int *)b)[0]);
    else if( (((int *)a)[1])-(((int *)b)[1]) != 0 )
        return (((int *)a)[1])-(((int *)b)[1]);
    else
        return  (((int *)a)[2])-(((int *)b)[2]);
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int a[n][4]; int rm[n];
    for(int i=0; i<n; i++) {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
        a[i][3]=i+1;
        rm[i]=0;
    }
    int N=n;
    while(N>0) {
        qsort(a, n, sizeof(int[4]), cmp); 
        int i;
        for(i=0; i<N-1; i++) {
            if(a[i][0]==a[i+1][0] && a[i][1]==a[i+1][1]) {
                N-=2;
                cout<<a[i][3]<<" "<<a[i+1][3]<<"\n";
                a[i][0]=a[i][1]=a[i][2]=a[i+1][0]=a[i+1][1]=a[i+1][2]=100000001;
                break;
            }
        }
        if(i>=N-1) break;
    }
    while(N>0) {
        qsort(a, n, sizeof(int[4]), cmp); 
        int i;
        for(i=0; i<N-1; i++) {
            if(a[i][0]==a[i+1][0]) {
                N-=2;
                cout<<a[i][3]<<" "<<a[i+1][3]<<"\n";
                a[i][0]=a[i][1]=a[i][2]=a[i+1][0]=a[i+1][1]=a[i+1][2]=100000001;
                break;
            }
        }
        if(i>=N-1) break;
    }
    while(N>0) {
        qsort(a, n, sizeof(int[4]), cmp); 
        int i;
        for(i=0; i<N-1; i++) {
            N-=2;
            cout<<a[i][3]<<" "<<a[i+1][3]<<"\n";
            a[i][0]=a[i][1]=a[i][2]=a[i+1][0]=a[i+1][1]=a[i+1][2]=100000001;
            break;
        }
        if(i>=N-1) break;
    }
}