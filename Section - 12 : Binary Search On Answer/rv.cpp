
#include<string>
#include<iostream>
#include<vector>
using namespace std;
string ans ;
void f(int idx, string s, vector<string>& nums, int n) {
        if(idx == n) {
            bool hai = false;
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == s) {
                    hai = true;
                }
            }
            if(!hai) {
                ans = s;
            }
            return;
        }
        f(idx + 1, s + "0", nums, n);
        f(idx + 1, s + "1", nums, n);
}