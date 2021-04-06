#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i][0]);
    int outn=n;
    int b[outn];
    int difsum=0;
    for(int i=0; i<n/2; i++)
    {
        int min=0;
        for(int i=0; i<outn; i++)
            if(a[min]>a[i])
                min=i;
        
        outn-=2;
    }
}