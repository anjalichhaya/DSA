#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int> last;
    int start=0 , maxLen=0;
    for(int i=0; i < s.length(); i++){
        if(last.count(s[i]) && last[s[i]] >= start){
            start = last[s[i]] + 1;
        }
        last[s[i]]=i;
        maxLen = max(maxLen , i - start +1);
    }
    cout<<maxLen;
    return 0;
}