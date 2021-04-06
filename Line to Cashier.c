#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int people[n];
    for(int i=0; i<n; i++)
        scanf("%d",&people[i]);
    int times[n];
    for(int i=0; i<n; i++)
    {
        times[i]=15*people[i];
        int in;
        for(int j=0; j<people[i]; j++)
        {
            scanf("%d",&in);
            times[i]+=5*in;
        }
    }
    int min=times[0];
    for(int i=1; i<n; i++)
        if(min>times[i])
            min=times[i];
    printf("%d\n",min);
}