class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        int carry=0;
        int j=nums.size()-1;
        while(j>=0){
            int sum=nums[j]+k%10+carry;
            nums[j]=sum%10;
            carry=sum/10;
            k=k/10;
            j--;
        }
        while(k>0){
            int sum=k%10+carry;
            nums.insert(nums.begin(),sum%10);
            carry=sum/10;
            k=k/10;
        }
        if(carry!=0){
            nums.insert(nums.begin(),carry);
        }
        return nums;
    }
};
