#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n-1);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int xr = 0;
    for(int i=0;i<n;i++){
        xr ^= i;
    }
    for(int num : nums){
        xr ^= num;
    }
    cout<<xr<<endl;
    return 0;

}