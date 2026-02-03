#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for(int i=0 ; i<n; i++){
        cin>>nums[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int need = target - nums[i];
    
    if (mp.count(need)){
        cout<<mp[need]<<" "<<i;
        return 0;
        mp[nums[i]]=i;
    }

}

}