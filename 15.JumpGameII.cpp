class Solution {
public:
    int jump(vector<int>& nums) {
        int i=0;
        for(int i=1;i<nums.size();i++){
            nums[i]=max(nums[i]+i,nums[i-1]);
        }
        int index=0;
        int ans=0;
        while(index<nums.size()-1){
            ans++;
            index=nums[index];
        }
        return ans;
    }
};
