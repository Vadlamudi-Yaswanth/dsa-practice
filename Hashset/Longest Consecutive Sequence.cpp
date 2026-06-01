
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0||n==1) return n;
        unordered_set<int>st;
        int maxlength=1;
        for(int x:nums){
            st.insert(x);
        }
        int currentlength=1;
        for(int x:st){
            if(st.find(x-1)==st.end()){
                currentlength=1;
                int start=x;
                while(st.find(start+1)!=st.end()){
                    start++;
                    currentlength++;
                }
                maxlength=max(maxlength,currentlength);
            }
        }
        return maxlength;
    }
};