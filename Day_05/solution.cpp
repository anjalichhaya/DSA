#include<iostream>
#include<vector>
using namespace std;


void rotate(vector<int>&nums, int k){
    int n=nums.size();
    k=k%n;
    int start, end;
    start = 0;
    end = n-1;
    
    while(start < end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    start=0;
    end=k-1;
    while(start < end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
    start=k;
    end=n-1;
    while(start < end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }

}
int main(){
    int n,k;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cin>>k;
    rotate(nums,k);
    cout<<"Rotated array"<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}