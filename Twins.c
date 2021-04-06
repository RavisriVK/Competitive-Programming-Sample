#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-1-i; j++)
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    int subsum=0;
    for(int i=0; i<n; i++)
    {
        subsum+=a[i];
        if(2*subsum>sum)
        {
            printf("%d\n",i+1);
            break;
        }
    }

}