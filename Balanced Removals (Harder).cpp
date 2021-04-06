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
    qsort(a, n, sizeof(int[4]), cmp); 
    int moves[n/2][2]; int cnt=0;

    int i;
    for(i=0; i<n-1; i++) {
        if(a[i][0]==a[i+1][0] && a[i][1]==a[i+1][1]) {
            moves[cnt][0]=a[i][3]; moves[cnt][1]=a[i+1][3]; cnt++;
            rm[i]=1; rm[i+1]=1; i++;
        }
    }

    for(i=0; i<n-1; i++) {
        if(rm[i]) continue;
        int nxt=i+1;
        while(nxt<n && rm[nxt]==1) nxt++;
        if(nxt<n && a[i][0]==a[nxt][0] ) {
            moves[cnt][0]=a[i][3]; moves[cnt][1]=a[nxt][3]; cnt++;
            rm[i]=1; rm[nxt]=1; i++;
        }
    }

    for(i=0; i<n-1; i++) {
        if(rm[i]) continue;
        int nxt=i+1;
        while(nxt<n && rm[nxt]==1) nxt++;
        if(nxt<n) {
            moves[cnt][0]=a[i][3]; moves[cnt][1]=a[nxt][3]; cnt++;
            rm[i]=1; rm[nxt]=1; i++;
        }
    }

    for(int i=0; i<cnt; i++)
        cout<<moves[i][0]<<" "<<moves[i][1]<<"\n";
}