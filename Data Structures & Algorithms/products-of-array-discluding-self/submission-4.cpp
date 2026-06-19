class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            int pdt=1,pro=1,tot=1;
            if(i==0){
                pro=pro*nums[i];
            }
            else{
                for(int j=i-1;j>=0;j--){
                    pro=pro*nums[j];
                }
            }
            for(int k=i+1;k<nums.size();k++){
                pdt=pdt*nums[k];
            }
            if(i==0){
                tot=pdt;
            }else{

            tot=pdt*pro;
            }
            arr.push_back(tot);
        }
        return {arr};
    }
};