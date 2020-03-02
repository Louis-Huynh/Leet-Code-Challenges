#include <vector>
using std::vector;


class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> returnVec;

        
        if(n==1){
            returnVec.push_back(0);
            return returnVec;
        }

        else{
            if(n%2==0){
                int half = n/2;
                int temp = -1;
                for(int i=0;i<n;i++){
                    if(i<half){
                        returnVec.push_back(i+1);
                    }
                    else{
                        returnVec.push_back(temp);
                        temp--;
                    }
                }
            }

            else{
                int half =(n-1)/2;
                int temp = -1;

                for(int i=0;i<n-1;i++){
                    if(i<half){
                        returnVec.push_back(i+1);
                    }
                    else{
                        returnVec.push_back(temp);
                        temp--;
                    }
                }
                returnVec.push_back(0);
            }

           
        }
        return returnVec;
    }
            
    
};