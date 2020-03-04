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
        if(numbers[L] > numbers[R]){
            break;
        }
        else{
            M = floor((L+R)/2);
            if(target>numbers[M]){
                L = M+1;
            }
            else if(target<numbers[M]){
                R = M-1;
            }
            else{
                cout<<foundIndex;
                foundIndex = M;
                cout<<"Here is the target's index:"<<foundIndex;
            }
        }
    }
    foundIndex = M;

    cout<<"foundIndex: "<<foundIndex<<"\n";
    return foundIndex;

}


vector<int> TwoSum(vector<int>& numbers, int target){
    int firstIndex;
    int secondIndex = binarySearchClosest(numbers, target);
    vector<int> bigHit;
    cout<<"secondIndex: "<<secondIndex;
    while(numbers[secondIndex] >= target)
        secondIndex--;
    for(int i=0;i<secondIndex;i++){
        cout<<"\nblap"<<target-numbers[secondIndex];
        if(numbers[i] == target-numbers[secondIndex]){
            firstIndex = i;
            cout<<"firstIndex: "<<firstIndex<<"\n";
            bigHit.push_back(firstIndex);
            bigHit.push_back(secondIndex);
        }
    }
    cout<<"\n\nfirstIndex: "<<firstIndex<<" secondIndex: "<<secondIndex<<"\n";
    return bigHit;
}


int main(){

    vector<int> numbers{2,7,11,15};
    int target=9;
    TwoSum(numbers, target);
    // binarySearchClosest(numbers, target);


}