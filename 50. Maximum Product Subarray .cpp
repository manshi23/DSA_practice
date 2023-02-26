class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        int curr=1;
        for(int i=0;i<nums.size();i++){
            curr*=nums[i];
            maxi=max(maxi,curr);
        }
        return maxi;
    }
};
