#include <iostream>
#include <vector>
#include <math.h>
using std::vector, std::cout;


void swap(vector<int>& longerVec, int index1, int index2){
int temp = longerVec[index1];
longerVec[index1] = longerVec[index2];
longerVec[index2] = temp;
}

void printArray(vector<int>& longerVec){
    for(int i=0;i<longerVec.size();i++){
        cout<<longerVec[i]<<",";
    }
}

int Partition(vector<int>& longerVec, int left, int right){
    int pivote = longerVec[right];
    int i=left-1;
    for(int j=left;j<right;j++){
        if(longerVec[j] <= pivote){
            i++;
            swap(longerVec, i, j);
        }
    }
    swap(longerVec, i+1, right);

    return i+1;
}

vector<int> QuickSort(vector<int>& longerVec, int left, int right){
    if(left<right){
        int pivotee = Partition(longerVec, left, right);
        QuickSort(longerVec, left, pivotee-1);
        QuickSort(longerVec, pivotee+1, right);
    }
    return longerVec;
}
    

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> intersectionVec;
    QuickSort(nums1, 0, nums1.size()-1);
    QuickSort(nums2, 0, nums2.size()-1);

    bool gottem = false;
    int beeg=0, smol=0;
    vector<int>* bigVec;
    vector<int>* smallVec;

    if(nums1.size()<nums2.size()){
        bigVec = &nums2;
        smallVec = &nums1;
    }
    else{
        bigVec = &nums1;
        smallVec = &nums2;
    }
        

    while(!gottem){
        if(beeg == bigVec->size() || smol == smallVec->size()){
            cout<<"\nOut of bound. Exiting.\n";
            break;
        }
        
        else if(smallVec->at(smol) == bigVec->at(beeg)){
            intersectionVec.push_back(smallVec->at(smol));
            smol++;
            beeg++;
        }

        else if(smallVec->at(smol) < bigVec->at(beeg))
            smol++;
        else if(smallVec->at(smol) > bigVec->at(beeg))
            beeg++;
    }

    return intersectionVec;
}