#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int subarraysDivByK(vector<int>&nums,int K){
    int size = nums.size();
    int sum = 0;
    int count = 0;

    unordered_map<int,int>mp;
    mp[0] = 1;
    for(int i : nums){
        sum+=i;
        int mod = sum % K;
        if(mod < 0){
            mod+=K;
        }
        if(mp.find(mod) != mp.end()){
            count+=mp[mod];
        }
     mp[mod]++;
    }
    return count;
    }
};
int main(){
    int n;
    cin>>n;

    vector<int>nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }

    int K;
    cin>>K;

    Solution solution;
    int result = solution.subarraysDivByK(nums,K);
    cout<<result;
    return 0;

}