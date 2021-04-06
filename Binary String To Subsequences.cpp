#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N;
    scanf("%d",&N);
    while(N--) {
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        vector <int> end0;
        vector <int> end1;
        vector <int> ans;
        for(int i=0; i<n; i++) {
            if(s[i]=='0') {
                if(end1.size()==0) {
                    ans.push_back(end1.size()+end0.size());
                    end0.push_back((end1.size()+end0.size()));
                } else {
                    ans.push_back(end1.back());
                    end0.push_back((end1.back()));
                    end1.pop_back();
                }  
            } else {
                if(end0.size()==0) {
                    ans.push_back(end1.size()+end0.size());
                    end1.push_back((end1.size()+end0.size()));
                } else {
                    ans.push_back(end0.back());
                    end1.push_back((end0.back()));
                    end0.pop_back();
                } 
            }
        }
        printf("%lu\n",end0.size()+end1.size());
        for(int i=0; i<ans.size(); i++)
            printf("%d ",1+ans[i]);
        printf("\n");
    }
}