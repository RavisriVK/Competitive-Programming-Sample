#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    int ndec[n];
    for(int i=0; i<n; i++)
    {
        int j;
        for(j=i+1; j<n&&a[j-1]<=a[j]; j++)
            ;
        ndec[i]=j-i;
    }
    int max=ndec[0];
    for(int i=1; i<n; i++)
        if(max<ndec[i])
            max=ndec[i];
    printf("%d\n",max);
}