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

int binarySearch(vector<int> vec, int target){
    int L = 0;
    int R = vec.size()-1;
    int M;
    cout<<"\n";
    while(L<=R){
        M = floor((L+R)/2);
        if(target > vec[M])
            L = M + 1;
        else if(target < vec[M])
            R = M - 1;
        else{
            cout<<"found it! "<< M <<" and value: "<<vec[M]<<"\n";
            return M;
        }

    }
    cout<<"failed to find it";
    return -1;
}

vector<int> intersect(vector<int>&nums1, vector<int>& nums2){
    vector<int> intersectionVec;
    QuickSort(nums1, 0, nums1.size()-1);
    QuickSort(nums2, 0, nums2.size()-1);

    printArray(nums1);
    cout<<"\n";

    printArray(nums2);
    bool gottem = false;
    int index1=0, index2=0;

    while(!gottem){
        if(index1 == nums1.size() || index2 == nums2.size()){
            cout<<"Out of bound. Exiting.\n";
            break;
        }
        if(nums1[index1] == nums2[index2]){
            intersectionVec.push_back(nums1[index1]);
            index2++;
        }
        index1++;
    }
    cout<<"\n";
    printArray(intersectionVec);
   
  
    return intersectionVec;
}