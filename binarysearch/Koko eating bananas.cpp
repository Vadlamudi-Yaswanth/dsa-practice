#include<vector>
#include<cmath>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int max=piles[0];
        for(int x:piles){
            if(x>max){
                max=x;
            }
        }
        int high=max;
        int mid;
        while(low<=high){
            long long hours=0;
            mid=(low+high)/2;
            for(int x:piles){
                hours+=ceil((double)x/mid);
            }
            if(hours<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;


    }
};