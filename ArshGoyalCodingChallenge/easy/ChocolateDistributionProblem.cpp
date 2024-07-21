#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    int size = a.size();
    sort(a.begin(),a.end());
    if(m>size){
        return -1;
    }
    int start = 0;
    int end = m - 1;
    int min_diff = INT_MAX;

    while(end<n){
        int diff = a[end] - a[start];
        if(diff<min_diff){
            min_diff = diff;
        }
        start++;
        end++;
    }
    return min_diff;
    }
};
int main(){
    long long n;
    cin>>n;

    long long m;
    cin>>m;

    vector<long long> a(n);
    for(long long i = 0;i<n;i++){
        cin>>a[i];
    }

    Solution solution;
    long long result = solution.findMinDiff(a,n,m);
    cout<<result;

    return 0;


}