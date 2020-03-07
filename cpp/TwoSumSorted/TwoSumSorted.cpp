#include <iostream>
#include <vector>
#include <math.h>
using std::vector;
using std::cout;


int binarySearchClosest(vector<int>& numbers, int target){
    int L = 0;
    int R = numbers.size()-1;
    int M; 
    
    while(L < R){//if L becomes R then take closest value
        M = floor((L+R)/2);
        if(target>numbers[M]){
            L = M+1;
        }
        else if(target<numbers[M]){
            R = M-1;
        }
        else {
            cout<<"Found target!\n";
            return M;
        }
        
    }
    cout<<"Failed binary search\n";
    return -1;

}


vector<int> TwoSum(vector<int>& numbers, int target){
    
    vector<int> bigHit;
    int subTarget, temp;
    
    for(int i=0;i<numbers.size();i++){
        temp = target-numbers[i];
        subTarget = binarySearchClosest(numbers, temp);
        if(target - numbers[i] == numbers[subTarget]){
            if(i>subTarget){
                bigHit.push_back(subTarget);
                bigHit.push_back(i);

            }
            else{
                bigHit.push_back(i);
                bigHit.push_back(subTarget);
            }
            break;
        }

    }

    cout<<"index 1: "<<bigHit[0]<<"\n";
    cout<<"index 2: "<<bigHit[1]<<"\n";

   

    
    return bigHit;
}



int main(){

    vector<int> numbers{0,0,1,2};
    int target=0;
    TwoSum(numbers, target);


}