#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int strStr(string haystack, string needle){
     int size1 = haystack.length();
     int size2 = needle.length();

     if(size1 < size2 ) return -1;
     for(int i=0;i<size1;i++)
        {
            int j, k = i;
            for(j=0;j<size2 && k<size1;j++,k++)
            {
                if(haystack[k] != needle[j]) break;
            }
            if(j == size2) return i;
        }
        return -1;
    }
};
int main(){
    string haystack;
    getline(cin,haystack);

    string needle;
    getline(cin,needle);

    Solution solution;
    int result = solution.strStr(haystack,needle);
    cout<<result;

}