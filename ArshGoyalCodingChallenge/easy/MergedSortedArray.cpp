#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Two pointers for nums1 and nums2
        int i = m - 1;
        int j = n - 1;
        // Pointer for the last element of merged array
        int k = m + n - 1;

        // Merge nums2 into nums1, starting from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If there are remaining elements in nums2, copy them
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {
    int m, n;
    cin >> m >> n;

    // nums1 should have size m + n because it needs to accommodate elements from nums2
    vector<int> nums1(m + n, 0);
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    vector<int> nums2(n);
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    Solution solution;
    solution.merge(nums1, m, nums2, n);

    // Print the merged array
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
