#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1;
        int count = 0;
        int currentSum = 0;

        for (int num : nums) {
            currentSum += num;
            if (prefixSumCount.find(currentSum - k) != prefixSumCount.end()) {
                count += prefixSumCount[currentSum - k];
            }
            prefixSumCount[currentSum]++;
        }

        return count;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k;
    cin >> k;

    Solution solution;
    int result = solution.subarraySum(nums, k);
    cout << result << endl;

    return 0;
}
