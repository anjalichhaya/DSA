#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    unordered_map<int,int>mp;
    int prefixSum=0;
    int maxLen =0;
    for(int i=0;i<n;i++){
        prefixSum += nums[i];
        if(prefixSum == k){
            maxLen = i+1;
        }
        if(mp.find(prefixSum - k) != mp.end()){
            maxLen= max(maxLen, i-mp[prefixSum -k]);
        }
        if(mp.find(prefixSum) == mp.end()){
            mp[prefixSum]=i;
        }
    }
  cout<< maxLen;
}
