#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int is_pal(string s){
    int i = 0 ; int j = s.length() - 1 ;
    while(i < j){
        if(s[i] != s[j]){
            return false ;
        }
        i++;j-- ;
    }
    return true ;
}

bool validPalindrome(string s) {
    int i = 0 ; 
    int j = s.length()- 1 ;
    while(i <= j){
        if(s[i] == s[j]){
            i++;j--;
        }
        else{ 
            return is_pal(s.substr(0 , i) + s.substr(i+1)) || is_pal(s.substr(0 , j) + s.substr(j+1)) ;
        }
    }
    return true ;
}
};
int main(){
    string s;
    getline(cin,s);
    Solution solution;
    bool result = solution.validPalindrome(s);
    cout<<result ? 1 : 0;
    return 0;
}