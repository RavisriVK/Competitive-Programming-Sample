#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b)
{
    return (*(long long *)a)-(*(long long *)b);
}


int main()
{
    long long N;
    scanf("%lld",&N);
    while(N--)
    {
        long long n, q;
        scanf("%lld %lld",&n,&q);
        long long a[n];
        for(long long i=0; i<n; i++)
            scanf("%lld",&a[i]);
        long long swap[q][2];
        for(int i=0; i<q; i++)
            scanf("%lld %lld",&swap[i][0], &swap[i][1]);
            long long val=0;
            if(n==1) {
                val=a[0];
                printf("%lld\n",val);
            } else {
                long long look=1;
                for(long long i=0; i<n; i++) {
                    if(look==1) {
                        if((i==0 && a[0]>a[1])||(i>0 && i<n-1 && a[i]>a[i-1] && a[i]>a[i+1])||(i==n-1 && a[n-1]>a[n-2])) {
                            look=0;
                            val+=a[i];
                        }
                    } else {
                        if(i>0 && i<n-1 && a[i]<a[i-1] && a[i]<a[i+1]) {
                            look=1;
                            val-=a[i];
                        }
                    }
                }
                printf("%lld\n",val);
            }

            for(long long k=0; k<q; k++) {
                if(n==1) {
                    printf("%lld\n",a[0]);
                    continue;
                }

                long long i1=swap[k][0]-1, i2=swap[k][1]-1;
                long long o1=i1, o2=i2;
                if((i1==0 && a[0]>a[1])||(i1>0 && i1<n-1 && a[i1]>a[i1-1] && a[i1]>a[i1+1])||(i1==n-1 && a[n-1]>a[n-2])) {
                    val-=a[i1];
                } else if(i1>0 && i1<n-1 && a[i1]<a[i1-1] && a[i1]<a[i1+1]) {
                    val+=a[i1];
                }

                if(i2!=o1 && i2!=(o1-1) && i2!=(o1+1)) {
                    if((i2==0 && a[0]>a[1])||(i2>0 && i2<n-1 && a[i2]>a[i2-1] && a[i2]>a[i2+1])||(i2==n-1 && a[n-1]>a[n-2])) {
                        val-=a[i2];
                    } else if(i2>0 && i2<n-1 && a[i2]<a[i2-1] && a[i2]<a[i2+1]) {
                        val+=a[i2];
                    }
                }

                i1=o1+1; i2=o2+1;

                if((i1==0 && a[0]>a[1])||(i1>0 && i1<n-1 && a[i1]>a[i1-1] && a[i1]>a[i1+1])||(i1==n-1 && a[n-1]>a[n-2])) {
                    val-=a[i1];
                } else if(i1>0 && i1<n-1 && a[i1]<a[i1-1] && a[i1]<a[i1+1]) {
                    val+=a[i1];
                }

                if(i2!=o1 && i2!=(o1-1) && i2!=(o1+1)) {
                    if((i2==0 && a[0]>a[1])||(i2>0 && i2<n-1 && a[i2]>a[i2-1] && a[i2]>a[i2+1])||(i2==n-1 && a[n-1]>a[n-2])) {
                        val-=a[i2];
                    } else if(i2>0 && i2<n-1 && a[i2]<a[i2-1] && a[i2]<a[i2+1]) {
                        val+=a[i2];
                    }
                }

                i1=o1-1; i2=o2-1;

                if((i1==0 && a[0]>a[1])||(i1>0 && i1<n-1 && a[i1]>a[i1-1] && a[i1]>a[i1+1])||(i1==n-1 && a[n-1]>a[n-2])) {
                    val-=a[i1];
                } else if(i1>0 && i1<n-1 && a[i1]<a[i1-1] && a[i1]<a[i1+1]) {
                    val+=a[i1];
                }

                if(i2!=o1 && i2!=(o1-1) && i2!=(o1+1)) {
                    if((i2==0 && a[0]>a[1])||(i2>0 && i2<n-1 && a[i2]>a[i2-1] && a[i2]>a[i2+1])||(i2==n-1 && a[n-1]>a[n-2])) {
                        val-=a[i2];
                    } else if(i2>0 && i2<n-1 && a[i2]<a[i2-1] && a[i2]<a[i2+1]) {
                        val+=a[i2];
                    }
                }

                i1=o1; i2=o2;

                long long temp=a[o1];
                a[o1]=a[o2];
                a[o2]=temp;

                if((i1==0 && a[0]>a[1])||(i1>0 && i1<n-1 && a[i1]>a[i1-1] && a[i1]>a[i1+1])||(i1==n-1 && a[n-1]>a[n-2])) {
                    val+=a[i1];
                } else if(i1>0 && i1<n-1 && a[i1]<a[i1-1] && a[i1]<a[i1+1]) {
                    val-=a[i1];
                }

                if(i2!=o1 && i2!=(o1-1) && i2!=(o1+1)) {
                    if((i2==0 && a[0]>a[1])||(i2>0 && i2<n-1 && a[i2]>a[i2-1] && a[i2]>a[i2+1])||(i2==n-1 && a[n-1]>a[n-2])) {
                        val+=a[i2];
                    } else if(i2>0 && i2<n-1 && a[i2]<a[i2-1] && a[i2]<a[i2+1]) {
                        val-=a[i2];
                    }
                }

                i1=o1+1; i2=o2+1;

                if((i1==0 && a[0]>a[1])||(i1>0 && i1<n-1 && a[i1]>a[i1-1] && a[i1]>a[i1+1])||(i1==n-1 && a[n-1]>a[n-2])) {
                    val+=a[i1];
                } else if(i1>0 && i1<n-1 && a[i1]<a[i1-1] && a[i1]<a[i1+1]) {
                    val-=a[i1];
                }

                if(i2!=o1 && i2!=(o1-1) && i2!=(o1+1)) {
                    if((i2==0 && a[0]>a[1])||(i2>0 && i2<n-1 && a[i2]>a[i2-1] && a[i2]>a[i2+1])||(i2==n-1 && a[n-1]>a[n-2])) {
                        val+=a[i2];
                    } else if(i2>0 && i2<n-1 && a[i2]<a[i2-1] && a[i2]<a[i2+1]) {
                        val-=a[i2];
                    }
                }

                i1=o1-1; i2=o2-1;

                if((i1==0 && a[0]>a[1])||(i1>0 && i1<n-1 && a[i1]>a[i1-1] && a[i1]>a[i1+1])||(i1==n-1 && a[n-1]>a[n-2])) {
                    val+=a[i1];
                } else if(i1>0 && i1<n-1 && a[i1]<a[i1-1] && a[i1]<a[i1+1]) {
                    val-=a[i1];
                }

                if(i2!=o1 && i2!=(o1-1) && i2!=(o1+1)) {
                    if((i2==0 && a[0]>a[1])||(i2>0 && i2<n-1 && a[i2]>a[i2-1] && a[i2]>a[i2+1])||(i2==n-1 && a[n-1]>a[n-2])) {
                        val+=a[i2];
                    } else if(i2>0 && i2<n-1 && a[i2]<a[i2-1] && a[i2]<a[i2+1]) {
                        val-=a[i2];
                    }
                }

                printf("%lld\n",val);
            }
    
    }
}