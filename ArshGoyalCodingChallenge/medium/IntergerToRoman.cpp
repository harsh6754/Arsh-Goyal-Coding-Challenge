#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string intRoman(int num){
    string roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};

    string romanNumeral="";
    for(int i = 0;i<13;i++){
        while(num>=value[i]){
            num-=value[i];
            romanNumeral+=roman[i];
        }
    }
    return romanNumeral;
    }
};
int main(){
    int num;
    cin>>num;

    Solution solution;
    string result = solution.intRoman(num);
    cout<<result;

    return 0;
}