#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxScore(vector<int>&cardPoints,int k){
        int size = cardPoints.size();

        int Left_Sum = 0;
        int Right_Sum = 0;
        int Max_Sum = 0;

        for(int i = 0;i<k;i++){
            Left_Sum += cardPoints[i];
        }
        Max_Sum=Left_Sum;
        for(int Left_Index = k-1, Right_Index = size-1; Left_Index >= 0; Left_Index--, Right_Index--){
            Left_Sum -= cardPoints[Left_Index];
            Right_Sum += cardPoints[Right_Index];
            Max_Sum = max(Max_Sum, Left_Sum + Right_Sum);
        }
        return Max_Sum;

    }
};
int main(){
    int n;
    cin>>n;
    vector<int>cardPoints(n);
    for(int i = 0;i<n;i++){
        cin>>cardPoints[i];
    }
    int k;
    cin>>k;

    Solution solution;
    int result = solution.maxScore(cardPoints, k);
    cout<<result;
    return 0;
}