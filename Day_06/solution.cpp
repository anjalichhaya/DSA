#include<bits/stdc++.h>
using namespace std;

int longSubArray(vector<int>& nums, int k){
    int l=0, maxLen=0, sum=0;
    for(int r=0; r < nums.size();r++){
        sum += nums[r];
        while(sum > k && l <= r){
            sum -= nums[l];
            l++;
        }
        if(sum == k){
            maxLen = max(maxLen, r-l+1);
        }

    } 
    return maxLen;
}

int main(){
    int n, k;
    cin>>n >> k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout <<longSubArray(nums,k);
}