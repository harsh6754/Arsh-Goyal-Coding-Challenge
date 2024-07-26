#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isValid(string s){
        stack<char>st;
        for(char c : s){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }else{
                if(st.empty() || 
                (c==')' && st.top() != '(') ||
                (c=='}' && st.top() != '{') ||
                (c==']' && st.top() != '[')){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
int main(){
    string s;
    getline(cin,s);

    Solution solution;
    bool result = solution.isValid(s);
    cout<<result ? 1 :0;
    return 0;
}