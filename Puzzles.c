#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int f[m];
    for(int i=0; i<m; i++)
        scanf("%d",&f[i]);
    for(int i=0; i<m-1; i++)
        for(int j=0; j<m-i-1; j++)
            if(f[j]>f[j+1])
            {
                int temp=f[j];
                f[j]=f[j+1];
                f[j+1]=temp;
            }
    int AmB=f[n-1]-f[0];
    for(int i=1; i+n-1<m; i++)
    {
        if(AmB>(f[i+n-1]-f[i]))
            AmB=f[i+n-1]-f[i];
    }
    printf("%d\n",AmB);
}