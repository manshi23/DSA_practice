class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            vector<int>m;
            while(nums[i]>0){
                m.push_back(nums[i]%10);
                nums[i]=nums[i]/10;
            }
            reverse(m.begin(),m.end());
            for(int i=0;i<m.size();i++){
                v.push_back(m[i]);
            }
        }
        return v;
    }
};
