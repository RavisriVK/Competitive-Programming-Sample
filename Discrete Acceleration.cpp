#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

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
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long n, l;
        scanf("%lld %lld",&n,&l);
        long long a[n+2];
        a[0]=0; a[n+1]=l;
        for(long long i=1; i<=n; i++)
            scanf("%lld",&a[i]);
        /*for(int i=n; i>=0; i--)
            printf("<%lld>", a[i+1]-a[i]);
        printf("\n");*/
        double t1[n+1]; t1[0]=0.0;
        for(long long i=1; i<=n+1; i++) {
            t1[i]=t1[i-1]+(((1.0)*(a[i]-a[i-1]))/(1.0*i));
        }
        double t2[n+1]; t2[n+1]=0.0; a[0]=0;
        for(long long i=n; i>=0; i--) {
            double temp=a[i+1]; temp-=a[i];
            t2[i]=t2[i+1]+ temp/(n+1.0-i);//(((1.0)*(a[i+1]-a[i]))/((1.0)*(n+1-i)));
            //printf("<%lld %lld %lld>",a[i+1], a[i], i);
        }
        /*for(long long i=0; i<=n+1; i++)
            printf("%lf ",t1[i]);
        printf("\n");
        for(long long i=0; i<=n+1; i++)
            printf("%lf ",t2[i]);
        printf("\n");*/
        long long bound=-1;
        for(long long i=0; i<=n+1; i++) {
            if(t1[i]>=t2[i]) {
                bound=i; break;
            }
        }
        double tb=t1[bound-1], te=t2[bound];
        double x= a[bound]*bound + a[bound-1]*(n+2-bound) + (te-tb)*(n+2-bound)*bound;
        x/=((1.0)*(n+2.0));
        double ans=tb+((x-a[bound-1])/((1.0)*bound));
        printf("%.7lf\n",ans);
    }
}