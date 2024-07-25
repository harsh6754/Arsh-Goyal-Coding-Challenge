#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> uniquePerms(vector<int> arr, int n) {
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());
        do {
            result.push_back(arr);
        } while (next_permutation(arr.begin(), arr.end()));
        return result;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution solution;
    vector<vector<int>> result = solution.uniquePerms(arr, n);

    for(const auto& perm : result) {
        for(int value : perm) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
