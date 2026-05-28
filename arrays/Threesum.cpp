#include<vector>
#include<set>
#include<climits>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
            int sum=nums[i]+nums[left]+nums[right];
            if(sum==0){
                st.insert({nums[i],nums[left],nums[right]});
                left++;
                right--;
            }
            else if(sum<0){
                left++;
            }
            else{
                right--;
            }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
                                    
};