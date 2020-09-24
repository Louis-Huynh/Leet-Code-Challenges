#include <iostream>
#include <vector>
#include <string>
using std::vector, std::string, std::cout;


vector<int> shortestToChar(string S, char C){
    vector<int> indexC;
    for(int i=0;i<S.size();i++){
        if(C == S[i]){
            indexC.push_back(i);
        }
    }
   
    int e_index=0;
    int diff1, diff2;
    vector<int> diffWithC;

    for(int i=0;i<S.size();i++){
        diff1 = abs( indexC.at(e_index) - i);
        if(indexC.size()-1==e_index){//check if at last iteration of e
            diffWithC.push_back(diff1);
        }
        else{
            diff2 = abs( indexC.at(e_index+1) - i);

            if(diff2<=diff1){
                diffWithC.push_back(diff2);
                e_index++;
            }
            else{
                diffWithC.push_back(diff1);
            }
        }
    }

    return diffWithC;

}
