#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minprice=INT_MAX;
        int max_profit=0;
        for(int i=0;i<n;i++){
            minprice=min(minprice,prices[i]);
            int profit=prices[i]-minprice;
            max_profit=max(max_profit,profit);
        }
        return max_profit;

    }
};