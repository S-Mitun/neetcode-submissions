class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        vector<int> count;
        int c=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                c++;
            }
            else{
                temp.push_back(nums[i-1]);
                count.push_back(c);
                c=1;
            }
        }
        temp.push_back(nums[nums.size()-1]);
        count.push_back(c);
        for(int i=0;i<temp.size()-1;i++){
            for(int j=i+1;j<temp.size();j++){
                if(count[j]>count[i]){
                    swap(count[i],count[j]);
                    swap(temp[i],temp[j]);
                }
            }
        }
        vector<int> ans;
        for(int i=0;i<k && i<temp.size();i++){
            ans.push_back(temp[i]);
        }
        return {ans};
    }
};
