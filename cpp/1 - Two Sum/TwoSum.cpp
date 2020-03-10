#include <vector>
#include <iostream>
using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> returno;
    
        for(int i=0;i<nums.size();i++){
            int sum = nums[i];
            for(int j=0;j<nums.size();j++){
                if(i==j)
                    continue;
                sum+=nums[j];
                if(sum==target && returno.size()<2){
                    returno.push_back(i);
                    returno.push_back(j);
                }
                sum-=nums[j];
            }
        }
        return returno;
    }
};

int main(){
    Solution solnObj;
    vector <int> nums{1,2,3,4};
    int target;
    solnObj.twoSum(nums, target);

    return 0;
}