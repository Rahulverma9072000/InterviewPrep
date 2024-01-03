// https://leetcode.com/problems/product-of-array-except-self/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Approach 1 Using Division Operator 
//But we are not allowed to use division operator 
vector<int> productExceptSelf1(vector<int> &nums){
    vector<int> ans;
    int prod = 1;
    for(int i=0;i<nums.size();i++){
        prod *=nums[i];
    }
    for(int i=0;i<nums.size();i++){
        ans.push_back(prod/nums[i]);
    }
    return ans;
}
vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans;
    int prev = 1;
    for(int i=0;i<nums.size();i++){
        ans.push_back(prev);
        prev *= nums[i];
    }
    //Now do it in reverse direction 
    prev = 1;
    for(int i=nums.size()-1;i>=0;i--){
        ans[i] *= prev;
        prev *= nums[i];
    }
    return ans;
}
int main()
{
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res = productExceptSelf(arr);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }cout<<endl;
    return 0;
}