class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        vector <int> list;
        for(int i=0;i<len;i++){
            if(nums[i] !=0){
                list.push_back(nums[i]);
            }
        }
        for(int j=0;j<len;j++){
            if(nums[j] ==0){
                list.push_back(nums[j]);
            }
        }
    
        for(int k=0;k<len;k++){
            nums[k] = list[k];
        }
        
        
    }
};