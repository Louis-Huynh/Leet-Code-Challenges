#include <iostream>
#include <vector>
#include <unordered_map>
using std::unordered_map, std::vector;

int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int biggest = -1;
        int actual_val;
        for(auto ti = hash.begin();ti!=hash.end();ti++){
            if(ti->second > biggest){
                biggest = ti->second;
                actual_val = ti->first;
            }
        }

        if(biggest>(nums.size()/2))
            return actual_val;

        return -1;
    }