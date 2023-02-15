class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int pri=prices[0];
        for(int i=1;i<prices.size();i++){
            maxi=max(maxi,prices[i]-pri);
            if(pri>prices[i]){
                pri=prices[i];
            }
        }
        return maxi;
    }
};
