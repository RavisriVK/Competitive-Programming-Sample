#include<stdio.h>
int main()
{
    int bIndex;
    FILE *fp=fopen("input.txt","r");
    fscanf(fp,"%d",&bIndex);
    int s1, s2;
    for(int i=0; i<3; i++)
    {
        fscanf(fp,"%d %d",&s1,&s2);
        if(s1==bIndex)
            bIndex=s2;
        else if(s2==bIndex)
            bIndex=s1;
    }
    fclose(fp);
    fp=fopen("output.txt","w");
    fprintf(fp,"%d\n",bIndex);
    fclose(fp);
}