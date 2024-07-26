#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void printDuplicate(string S){
      int size = S.length();
      unordered_map<char,int>mp;
      for(int i = 0;i<size;i++){
        mp[S[i]]++;
      }
      for(auto &i : mp){
        if(i.second>1){
            cout<<i.first<<i.second<<endl;
        }
      }
    }
};
int main(){
    string S;
    getline(cin,S);
    Solution solution;
    solution.printDuplicate(S);
    return 0;
}