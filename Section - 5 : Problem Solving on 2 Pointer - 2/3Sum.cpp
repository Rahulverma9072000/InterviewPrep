#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Two Sum : Leetcode
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> res;
    // Return answer in any order
    sort(nums.begin(), nums.end());
    // find the index of the array
    int s = 0;
    int e = nums.size() - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        cout << s << " " << mid << " " << e << endl;
        if (nums[mid] == target)
        {
            res.push_back(s);
            res.push_back(e);
            return res;
        }
        else if (nums[mid] > target)
        {
            e--;
        }
        else
        {
            s++;
        }
    }
    return res;
}
// Unique Triplets
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> res;
    // have to return the 3 sum pairs in res

    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    vector<int> res = twoSum(arr, target);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}