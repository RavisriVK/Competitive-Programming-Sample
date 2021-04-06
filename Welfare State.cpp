#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>

using namespace std;

typedef long long ll;

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}

int cmp1(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}

int main()
{
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0; i<n; i++) {
        cin>>a[i][0];
        a[i][1]=0;
    }
    int q;
    cin>>q;

    int pays[q+2];
    for(int i=0; i<=q+1; i++)
        pays[i]=0;
    int pyt=1;

    for(int i=1; i<=q; i++) {
        int op;
        cin>>op;
        if(op==1) {
            int p, x;
            cin>>p>>x;
            a[p-1][0]=x;
            a[p-1][1]=pyt;
        } else {
            int x;
            cin>>x;
            pays[pyt]=x;
            pyt++;
        }
    }
    for(int i=pyt-2; i>=0; i--) {
        pays[i]=max(pays[i], pays[i+1]);
    }
    for(int i=0; i<n; i++) {
        a[i][0]=max(a[i][0], pays[a[i][1]]);
    }
    for(int i=0; i<n; i++)
        cout << a[i][0] << " ";
    cout << "\n";
}