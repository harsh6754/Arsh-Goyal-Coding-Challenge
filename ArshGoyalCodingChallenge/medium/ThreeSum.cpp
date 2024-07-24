#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.size() < 3) return ans;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size()-2; ++i)
        {
            if(i != 0 && nums[i] == nums[i-1])
                continue;
            
            int a = i + 1, b = nums.size() -1, t;
            while(a < b)
            {
                t = nums[i] + nums[a] + nums[b];
                if(t > 0)
                    b--;
                else if(t < 0)
                    a++;
                else
                {
                    ans.push_back({nums[i] , nums[a] , nums[b]});
                    a++; b--;
                    while(nums[a] == nums[a-1] && a < b)
                        a++;
                    while(nums[b] == nums[b+1] && a < b)
                        b--;
                }
            }
        }
        
        return ans;
    }
};
int main(){
    int n;
    cin>>n;

    vector<int>nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }

    Solution solution;
    vector<vector<int>>result = solution.threeSum(nums);

        for (const auto& triplet : result) {
        cout << '[';
        for (int num : triplet) {
            cout << num << ' ';
        }
        cout << "]\n";
    }

    return 0;
}