#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixsum(n);
        unordered_map<int,int>mp;
        if(n==1) return 0;
        vector<int>conv(n);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                conv[i]=-1;
            }
            else{
                conv[i]=1;
            }
        }
        prefixsum[0]=conv[0];
        for(int i=1;i<n;i++){
            prefixsum[i]=prefixsum[i-1]+conv[i];
        }
        int max_length=0;
        mp[0]=-1;
        for(int j=0;j<n;j++){
            if(mp.find(prefixsum[j])!=mp.end()){
                max_length=max(max_length,j-mp[prefixsum[j]]);
            }
            else{
                mp[prefixsum[j]]=j;
            }
        }
        return max_length;

    }
};