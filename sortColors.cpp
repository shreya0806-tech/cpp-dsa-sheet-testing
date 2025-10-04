class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++){
            int count = 0;
            for(int j=0; j<nums.size()-1; j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    count++;
                }
            }
            if(count==0) break;
        }
    }
};
