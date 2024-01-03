#include<iostream>
using namespace std;
//I coded 
    void nextPermutation(vector<int>& nums) {
        //Edge Case 
        //if the array is sorted in decreasing order 
        //than return increasing order 
        //Observation 
        //I have to traverse from Right to Left
        //I have to find the index of the element where 
        int n = nums.size();
        bool isDone = false;
        //nums[i] < nums[i+1]
        for(int i=n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                //this ith index is where we have to swap with the next
                //greater element 
                //looking for the first greater element 
                int j = nums.size()-1;
                while(nums[j] <= nums[i]){
                    j--;
                }
                //Swap the i and j th element 
                swap(nums[i],nums[j]);
                //i have to sort the rest of the array 
                sort(nums.begin()+i+1,nums.end());
                isDone = true;
                break;
            }
        }
        if(!isDone){
            sort(nums.begin(),nums.end());
        }
    }

int main(){

    return 0;
}