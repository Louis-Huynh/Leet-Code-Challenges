#include <iostream>
#include <vector>
#include <unordered_map>
using std::vector;
using std::cout;
using std::unordered_map;

int singleNumber(vector<int>& nums){
    int placeHolder;

    unordered_map<int, int> hash;
    for(int i=0;i<nums.size();i++){
        hash[nums[i]]++;
    }

    int foundIndex;
    for(auto t=hash.begin();t!=hash.end();t++){
        if(t->second == 1){
            foundIndex = t->first;
        }
    }
   
    cout<<"Found number: "<<foundIndex<<"\n";

    return foundIndex;
}