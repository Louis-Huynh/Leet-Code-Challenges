#include <iostream>
#include <vector>
using std::vector;
using std::cout;

void Swap(vector<int>& vect, int index1, int index2){
    int temp = vect[index1];
    vect[index1] = vect[index2];
    vect[index2] = temp;
}

int Partition(vector<int>& unsorted, int left, int right){

    int i = left-1;
    int pivot = unsorted[right];
    for(int j=left;j<right;j++){
        if(unsorted[j] <= pivot){
            i++;
            Swap(unsorted, i, j);
        }
    }
    return i+1;
}

void printSorted(vector<int>& unsorted){
    cout<<"Here is the sorted: \n";
    for(int i=0;i<unsorted.size();i++){
        cout<<unsorted[i];
    }
}

vector<int> QuickSort(vector<int>& unsorted, int left, int right){
    
    if(left<right){
        int pivotPosition = Partition(unsorted, left, right);
        QuickSort(unsorted, left, pivotPosition-1);
        QuickSort(unsorted, pivotPosition+1, right);
    }
    return unsorted;
}