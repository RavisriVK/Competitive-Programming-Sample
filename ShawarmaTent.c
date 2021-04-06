#include<stdio.h>
int main()
{
    int n, sx, sy;
    scanf("%d %d %d",&n, &sx, &sy);
    int s[n][2];
    int l=0,r=0,u=0,d=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&s[i][0], &s[i][1]);
        if(s[i][0]>sx)
            r++;
        else if(s[i][0]<sx)
            l++;
        if(s[i][1]>sy)
            u++;
        else if(s[i][1]<sy)
            d++;
    }
    if(l>=r && l>=u && l>=d)
    {
        printf("%d\n",l);
        printf("%d %d\n",sx-1,sy);
    }
    else if(r>=l && r>=u && r>=d)
    {
        printf("%d\n",r);
        printf("%d %d\n",sx+1,sy);
    }
    else if(u>=r && u>=l && u>=d)
    {
        printf("%d\n",u);
        printf("%d %d\n",sx,sy+1);

    }
    else if(d>=r && d>=u && d>=l)
    {
        printf("%d\n",d);
        printf("%d %d\n",sx,sy-1);

    }
}