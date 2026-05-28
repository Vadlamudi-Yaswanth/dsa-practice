// Problem: Two Sum
// LeetCode: #1
// Approach: HashMap
// Time Complexity: O(n)
// Space Complexity: O(n)
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int complement=target-nums[i];
            if(mp.find(complement)!=mp.end()&& mp[complement]!=i){
                return {i,mp[complement]};
            }
        }
        return {};
    }

};