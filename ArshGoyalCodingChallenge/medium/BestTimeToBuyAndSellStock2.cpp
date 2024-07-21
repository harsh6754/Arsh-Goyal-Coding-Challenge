#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int j=prices.size()-1, i=j-1, res=0;
        while(i>=0){
            if(prices[j]-prices[i]>0) {
                res += prices[j]-prices[i];
                j--;
            }
            else j=i;
            i--;
        }
        return res;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>prices(n);
    for(int i = 0;i<n;i++){
        cin>>prices[i];
    }
    Solution solution;
    int result = solution.maxProfit(prices);
    cout<<result;
    return 0;
}