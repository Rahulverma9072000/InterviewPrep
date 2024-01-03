// https://mirror.codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
#include<iostream>
#include<algorithm>
using namespace std;
bool good(int n,int x,int y,int mid){
    //Objective 
    //If in mid amount of time , i am able to make n-1 copies 
    //Bcoz we have to copy first print orignal 
    //My mid value is good , hence I should return treue;
    //Check how many copies can be made in mid amount of time 
    //if no of copies >= n-1 return true
    //otherwise return false
    //c1 copies can make mid/x copies in mid time 
    //c2 copies can make mid/y copies in mid time 
    return (mid/x) + (mid/y) >= n-1 ;
}
int miniMiseTime(int n,int x,int y){
    //edge caseC
    if(n==1){
        return min(x,y);
    }
    int left = 0;
    int right = max(x,y)*n;
    int ans = 0;
    while(left<=right){
        //mid is representing a time 
        int mid = left + (right-left)/2;
        //good function that check if mid time range is enough or not 
        //to make n-1 copies
        if(good(n,x,y,mid)){
            ans = mid;
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    return ans + min(x,y);
}
int main(){
    int n,x,y;cin>>n>>x>>y;
    cout<<miniMiseTime(n,x,y)<<endl;
    return 0;
}