class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                el=nums[i];
                count=1;
            }
            else if(el==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int count1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el){
                count1++;
            }
        }
        if(count1> nums.size()/2){
            return el;
        }
        return 0;
    }
};
