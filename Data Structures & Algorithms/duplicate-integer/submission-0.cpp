class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int found=0;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    c++;
                }
                
            }
            if(c>1){
                found=1;
            }
        }
        if(!found){
            return false;
        }
        else{
            return true;
        }
    }
};