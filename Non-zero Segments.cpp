#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <set>

using namespace std;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b)
{
    return (*(long long *)a)-(*(long long *)b);
}


int main()
{

    long long n;
    scanf("%lld",&n);
    long long in;
    long long s[n+1]; s[0]=0;
    for(int i=1; i<=n; i++) {
        scanf("%lld",&in);
        s[i]=s[i-1]+in;
    }

    //long long check[n+1];
    //for(long long i=0; i<=n; i++) check[i]=0;
    //long long cp=-1;
    set <long long> check;
    int ans=0;
    for(long long i=1; i<=n; i++) {
        int flag=0;
        //for(long long j=0; j<=cp && flag!=1; j++) {
        //    if(s[i]==check[j]) {
        //        flag=1;
        //    }
        //}
        if(check.find(s[i])!=check.end()) {
            ans++;
            check.clear();
            check.insert(s[i-1]);
        } else {
            check.insert(s[i-1]);
        }
    }
    printf("%d\n",ans);
}