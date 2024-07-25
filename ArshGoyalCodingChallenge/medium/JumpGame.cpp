#include<bits/stdc++.h>
using namespace std;
class Solution {
 public:
  bool canJump(vector<int>& nums) {
    int i = 0;
    for (int reach = 0; i < nums.size() && i <= reach; ++i)
      reach = max(reach, i + nums[i]);

    return i == nums.size();
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
    bool result = solution.canJump(nums);
    cout<<result ? 1 : 0;

    return 0;
}