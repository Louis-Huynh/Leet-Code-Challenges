#include <iostream>
#include <string>
#include <math.h>
using std::string, std::to_string, std::cout;

/*
checklist:

-if !carryOne && addOne -> add 1 -> both false
-if carryOne && addOne -> add 1 -> carryOne true, add false
-if carryOne && !addOne -> add 1 -> both false
-if !carryOne && !addOne -> add 0 -> both false 
*/
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
    

    int carryOne = 0;
    int buildBin = 0;
    for(int i=0;i<longer;i++){
        if(i>shorter-1){
            //only print long
            if(i==longer-1){
                if((*bigBin)[longer-1-i] == '1' && carryOne == 1){
                    buildBin += pow(10, i+1);
                }
            }
            else{
                if((*bigBin)[longer-1-i] == '1'){
                    if(carryOne == '0')
                        buildBin += pow(10, i);
                }
            else if((*bigBin)[i] == '0'){
                //do nothing
            }
            else if((*bigBin)[i] == '1'){
                 buildBin += pow(10, i);
            }
            else{
                if(carryOne == '1')
                    buildBin += pow(10, i);
            }
            }
            
            

            
        }
        else{
            if((*bigBin)[longer-1-i] == '1' && (*smallBin)[shorter-1-i] == '1'){
                //check if carryOn already true
                if(carryOne > 0){
                    buildBin += pow(10,i);
                    if(i==longer-1){
                        buildBin += pow(10,i+1);
                    }
                }
                else if(carryOne == 0){
                    if(i==longer-1){
                        buildBin += pow(10, i+1);
                    }
                    carryOne++;
                }
                
            }
            else if((*bigBin)[longer-1-i] == '1' && (*smallBin)[shorter-1-i] == '0'){
                if(carryOne == 0)
                    buildBin += pow(10, i);
                
            }
            else if((*bigBin)[longer-1-i] == '0' && (*smallBin)[shorter-1-i] == '1'){
                if(carryOne == 0)
                    buildBin += pow(10, i);
            }
            else{
                if(carryOne == 1){
                    buildBin += pow(10, i);
                    carryOne --;
                }
                    
            }


        }
    }
    cout<<"buildBin: "<<buildBin<<"\n";
    return to_string(buildBin);
}