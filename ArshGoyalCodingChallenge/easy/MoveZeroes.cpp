#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        
        while (right < n) {
            if (nums[right] != 0) {
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
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
    solution.moveZeroes(nums);
    for(int i = 0;i<n;i++){
       cout<<nums[i]<<" ";
    }
    return 0;
}