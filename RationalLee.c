#include<stdio.h>
#include<stdlib.h>

int numcmp1(int *a, int *b)
{
    return *a>*b;
}
int numcmp2(int *a, int *b)
{
    return *a<*b;
}

int main()
{
    int N;
    scanf("%d",&N);
    long long out[N];
    while(N--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int w[k];
        for(int i=0; i<k; i++)
            scanf("%d",&w[i]);
        qsort(a,n,sizeof(int),(int (*)(const void*,const void*))numcmp2);
        qsort(w,k,sizeof(int),(int (*)(const void*,const void*))numcmp1);
        
        long long happiness=0;
        for(int i=0; i<k; i++)
            happiness+=a[i];
        int friend=0;
        for(int i=k; friend<k ; i+=(w[friend++]-1))
        {
            if(w[friend]>1)
                happiness+=a[i+w[friend]-2];
            else
                happiness+=a[friend];
        }
        printf("%lld\n",happiness);
    }
}