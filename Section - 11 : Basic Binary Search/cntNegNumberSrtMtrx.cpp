#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int countNegatives(vector<vector<int>>& grid) {
    int cnt = 0;
    int r = grid.size();
    int c = grid[0].size();
    int i = 0;
    while(i<r){
        int s = 0;
        int e = c-1;
        int res = c;
        while(s<=e){
            int m = (s+e)/2;
            if(grid[i][m]<0){
                res = m;
                e = m-1;
            }else{
                s = m+1;
            }
        }
        cnt += (c-res);
        i+=1;
    }
    return cnt;
}
int main(){
    return 0;
}