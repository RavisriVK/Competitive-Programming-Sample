#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    long long out[N];
    while(N--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        long a[n];
        for(int i=0; i<n; i++)
            scanf("%ld",&a[i]);
        long w[k];
        for(int i=0; i<k; i++)
            scanf("%ld",&w[i]);
        sort(a,a+n);
        reverse(a,a+n);
        sort(w,w+k);
        
        long long happiness=0;
        for(int i=0; i<k; i++)
            happiness+=a[i];
        int friendNum=0;
        for(int i=k; friendNum<k ; i+=(w[friendNum++]-1))
        {
            if(w[friendNum]>1)
                happiness+=a[i+w[friendNum]-2];
            else
                happiness+=a[friendNum];
        }
        printf("%lld\n",happiness);
    }
}