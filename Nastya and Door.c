#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n];
        for(int i=0; i<n; i++)
          scanf("%d",&a[i]);
        int peaks[n];
        peaks[0]=0; 
        for(int i=1; i<=n-2; i++)
            if(a[i]>a[i-1]&&a[i]>a[i+1])
                peaks[i]=1+peaks[i-1];
            else 
                peaks[i]=peaks[i-1];
        peaks[n-1]=peaks[n-2];
        /*for(int i=0; i<n; i++)
            printf("%d ",peaks[i]);
        printf("\n");*/
        int max=n-k;
        for(int i=n-k; i>=0; i--)
        {
            if((peaks[i+k-2]-peaks[i])>=(peaks[max+k-2]-peaks[max]))
                max=i;
        }
        printf("%d %d\n",peaks[max+k-2]-peaks[max]+1,max+1);
    }
}