#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int count=0;
        vector<int>prefixsum(n);
        prefixsum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }
        for(int j=0;j<n;j++){
            if(prefixsum[j]==k){
                count++;
            }
            int val=prefixsum[j]-k;
            if(mp.find(val)!=mp.end()){
                count+=mp[val];
            }
            mp[prefixsum[j]]++;

        }
        return count;


    }
};