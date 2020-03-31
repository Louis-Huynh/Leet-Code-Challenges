#include <iostream>
#include <vector>
#include <queue>
using std::vector;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    bool found=false;
    int i = 0, j=0;
    int temp;
    std::queue<int> holding;
    bool finish;

    while(!finish){

        if(nums1[i] < nums2[j])
            i++;

        else if(!holding.empty()){

            if(nums1[i] == 0){
                if(holding.front() < nums2[j]){
                    //place holding.front()
                }
                else{
                    //place nums2[j] into nums1[i]
                }
                
            }

            if(holding.front() == nums1[i]){
                nums1[i+1] = holding.front();
                holding.push(nums1[i+1]);
                i++;
            }
            if(holding.front() < nums1[i] && holding.front() < nums2[j]){
                holding.push(nums1[i]);
                nums1[i] = holding.front();
                holding.pop(); 
                i++;
            }
            else if(nums2[j] < nums1[i]){
                holding.push(nums1[i]);
                nums1[i] = nums2[j];
                i++;
                j++;
            }
            
        }
    
        //else if(nums1[i] == 0)

        
        else if(nums1[i] >= nums2[j]){
            holding.push(nums1[i]);
            nums1[i] = nums2[j];
            i++;
            j++;
        }
    }

    
        
    
}