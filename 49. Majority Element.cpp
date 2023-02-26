class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int m=nums.size()/2;
        int ans=0;
        for(auto it:mp){
            if(it.second>m){
                ans=max(it.first,ans);
            }
        }
        return ans;
    }
};
