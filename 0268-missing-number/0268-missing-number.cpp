class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        for(int i=0;i<=len;i++){
            bool result = false;
            for(int j=0;j<len;j++){
                if(i == nums[j]){
                    result = true;
                    break;

                }

            }
            if(!result){
                return i;
            }
        }
        
        return -1;
    }

};