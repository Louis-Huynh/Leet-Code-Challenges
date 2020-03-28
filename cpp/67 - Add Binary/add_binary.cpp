#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using std::string, std::to_string, std::cout, std::vector;

string addBinary(string a, string b) {
    int longer, shorter;
    string* bigBin;
    string* smallBin;

    if(a.length()>b.length()){
        longer = a.length();
        shorter = b.length();
        bigBin = &a;
        smallBin = &b; 
    }
    else{
        longer = b.length();
        shorter = a.length();
        bigBin = &b;
        smallBin = &a;
    }
   
    bool carryOne = false;
    vector<int> buildBin;
    for(int i=0;i<longer;i++){
        if(i>shorter-1){
            if(i==longer-1){
                if((*bigBin)[longer-1-i] == '1' ){
                    if(carryOne){
                        buildBin.push_back(0);
                        buildBin.push_back(1);
                    }
                    else{
                        buildBin.push_back(1);
                    }
                }
            }
            else{
                if((*bigBin)[longer-1-i] == '1'){
                    if(!carryOne)
                        buildBin.push_back(1);

                    else{
                       buildBin.push_back(0);
                    }
                }
                else if((*bigBin)[longer-1-i] == '0'){
                    if(carryOne){
                        buildBin.push_back(1);
                        carryOne = false;
                    }
                    else{
                        buildBin.push_back(0);
                    }
                }
            }
        }
        else{
            if((*bigBin)[longer-1-i] == '1' && (*smallBin)[shorter-1-i] == '1'){
                if(carryOne ){
                    buildBin.push_back(1);
                    if(i==longer-1){
                        buildBin.push_back(1);
                    }
                }
                else if(!carryOne ){
                    if(i==longer-1){
                        buildBin.push_back(0);
                        buildBin.push_back(1);
                    }
                    else{
                        buildBin.push_back(0);
                        carryOne = true;
                    }
                }
            }
            else if((*bigBin)[longer-1-i] == '1' && (*smallBin)[shorter-1-i] == '0'){
                if(!carryOne)
                    buildBin.push_back(1);
                else
                    buildBin.push_back(0); 
            }
            else if((*bigBin)[longer-1-i] == '0' && (*smallBin)[shorter-1-i] == '1'){
                if(!carryOne)
                    buildBin.push_back(1);
                else
                    buildBin.push_back(0);
            }
            else{
                if(carryOne){
                    buildBin.push_back(1);
                    carryOne = false;
                }
                else
                    buildBin.push_back(0);    
            }
        }
    }
    string buildBin2 = "";
    for(int i=0;i<buildBin.size();i++){
        buildBin2.push_back('0'+ buildBin[buildBin.size()-1-i]);
    }
    cout<<"buildBin2: "<<buildBin2<<"\n";
    return buildBin2;
}