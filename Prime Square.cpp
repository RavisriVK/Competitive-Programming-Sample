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

bool isPrime[1000001];
int cntPrimes[1000001];

void generatePrimes()
{
    memset(isPrime+2, true, 999999);
    for(int k=2; k*k<=1000000; k++) 
    {
        if(isPrime[k]==false) continue;
        for(int i=k*k; i<=1000000; i+=k)
            isPrime[i]=false;
    }
    for(int i=2; i<=1000000; i++)
        cntPrimes[i]=cntPrimes[i-1]+(isPrime[i]);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    generatePrimes();
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                a[i][j]=1;
        int check;
        for(check=101; !isPrime[check] || isPrime[(check+1-n)]; check+=2)
            ;
        for(int i=0; i<n; i++)
            a[i][i]=check-(n-1);
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}