#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#define MOD(a) ((a)<0?((-1)*(a)):(a))
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        char s[201];
        scanf("%s",s);
        vector<int> alp;
        int length=strlen(s);
        alp.insert(alp.begin(),s[0]);
        int flag=0;
        for(int i=1; i<length; i++)
        {
            vector<int>::iterator it1=find(alp.begin(),alp.end(),s[i-1]);
            vector<int>::iterator it2=find(alp.begin(),alp.end(),s[i]);
            if(it2==alp.end())
            {
                if(alp.back()==s[i-1])
                    alp.insert(alp.end(),s[i]);
                else if(alp.front()==s[i-1])
                    alp.insert(alp.begin(),s[i]);
                else 
                {
                    flag=1;
                    break;
                }
            }
            else if(MOD(distance(it1,it2))>1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("NO\n");
        }
        else 
        {
            int alpha[26]={0};
            printf("YES\n");
            for(int i=0; i<alp.size(); i++)
            {
                printf("%c",alp.at(i));
                alpha[alp.at(i)-'a']=1;
            }
            for(int i=0; i<26; i++)
                if(alpha[i]==0)
                    printf("%c",'a'+i);
            printf("\n");
        }
    }
}