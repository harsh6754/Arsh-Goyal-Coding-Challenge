#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int>findDuplicates(vector<int>&nums){
        int size = nums.size();
        vector<int>ans;
        unordered_map<int,int> mp;
        for(int i = 0;i<size;i++){
            mp[nums[i]]++;
        }
        for(auto& pair : mp ){
            if(pair.second > 1){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution solution;
    vector<int> result = solution.findDuplicates(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}