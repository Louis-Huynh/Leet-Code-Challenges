#include <iostream>
#include <vector>
#include <math.h>
using std::vector;
using std::cout;

int binarySearchClosest(vector<int>& numbers, int target){
    int L = 0;
    int R = numbers.size()-1;
    int M = floor((L+R)/2);
    int foundIndex;        
 
    for(int i=0;i<numbers.size();i++){
        if(numbers[L] >= numbers[R]){//if L becomes R then take closest value
            foundIndex = L;
        }
        else{
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
    }

    return foundIndex;

}


vector<int> TwoSum(vector<int>& numbers, int target){
    int firstIndex;
    int secondIndex = binarySearchClosest(numbers, target);
    vector<int> bigHit;
    
  

    if(numbers[secondIndex] == target){//if found target
        
        
        if(numbers[secondIndex]<=0){
            for(int i=0;i<numbers.size();i++){
                if(numbers[i]==0){
                    firstIndex = i;
                    bigHit.push_back(firstIndex+1);
                    break;

                }
            }
        }
        bigHit.push_back(secondIndex+1);
        

        // return bigHit;
    }

   

    else if(secondIndex==numbers.size()-1){
        for(int i=0;i<secondIndex;i++){
            if(numbers[i] == target-numbers[secondIndex] && i!=secondIndex){
                firstIndex = i;
            cout<<"firstIndex: "<<firstIndex<<"\n";
            bigHit.push_back(firstIndex+1);
            bigHit.push_back(secondIndex+1);
            }
        }
    }

 

    else{
        secondIndex--;
        for(int i=0;i<=secondIndex;i++){
        cout<<"\nblap "<<target-numbers[secondIndex];
        if(numbers[i] == target-numbers[secondIndex] && i!=secondIndex){
            firstIndex = i;
            cout<<"firstIndex: "<<firstIndex<<"\n";
            bigHit.push_back(firstIndex+1);
            bigHit.push_back(secondIndex+1);
        }

        
    }

    }
    
    cout<<"\n\nfirstIndex: "<<firstIndex<<" secondIndex: "<<secondIndex<<"\n";
    return bigHit;
}


int main(){

    vector<int> numbers{0,0,1,2};
    int target=0;
    TwoSum(numbers, target);


}