#include<stdio.h>
#define P 1000000007L

long long factmod(long long n, long long p) {
    long long res = 1;
    while (n > 1) {
        res = (res * ((n/p) % 2 ?  p-1 : 1)) % p;
        for (long long i = 2; i <= n%p; ++i)
            res = (res * i) % p;
        n /= p;
    }
    return res % p;
}

long long power(long long x, long long y, long long p)  
{  
    long long res = 1;     // Initialize result  
  
    x = x % p; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  
//( a – b) % c = ( ( a % c ) – ( b % c ) ) % c

int main()
{
    long long n;
    scanf("%lld",&n);
    long long ans=(P+factmod(n,P)-power(2,n-1,P))%P; printf("%lld\n",ans);
    //printf("%d\n",factorial(n)-p2(n-1));
}