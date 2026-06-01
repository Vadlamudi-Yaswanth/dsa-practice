#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int currentlength=0;
        int n=s.size();
        if(n==0||n==1) return n;
        int max_length=0;
        int r=0;
        int l=0;
        int hash[256];
        fill(hash, hash + 256, -1);
        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            currentlength=r-l+1;
            max_length=max(max_length,currentlength);
            hash[s[r]]=r;
            r++;
        }

        return max_length;

    }
};
