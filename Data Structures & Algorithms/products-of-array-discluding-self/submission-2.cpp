class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        //sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int prod=1;
            for(int j=nums.size()-1;j>i;j--){
                if(nums[j]!=nums[i]){
                    prod*=nums[j];
                }
                else{
                    prod*=nums[i];
                }
            }
            for(int k=0;k<i;k++){
                if(nums[k]!=nums[i]){
                    prod*=nums[k];
                }
                else{
                    prod*=nums[i];
                }
            }
            ans.push_back(prod);
        }
        return {ans};
    }
};
