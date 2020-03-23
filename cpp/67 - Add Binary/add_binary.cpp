#include <iostream>
#include <string>
using std::string;

/*
checklist:

-if !carryOne && addOne -> add 1 -> both false
-if carryOne && addOne -> add 1 -> carryOne true, add false
-if carryOne && !addOne -> add 1 -> both false
-if !carryOne && !addOne -> add 0 -> both false 
*/

string addBinary(string a, string b) {
    int longer, shorter;
    int bigBin, smallBin;

    if(a.length()>b.length()){
        longer = a.length();
        shorter = b.length();
    }
    else{
        longer = b.length();
        shorter = a.length();
    }

    bool carryOn = false;
    bool addOne = false;
    int counter = 0;
    int buildBin = 0;
    for(int i=0;i<longer;i++){
        if(i>shorter){
            //only print long
        }
        else{
            if(a[i] == '1' && b[i] == '1'){
                //check if carryOn already true
                carryOn = true;
                
            }
            else if(a[i] == '1' && b[i] == '0'){
                //just add one to new string
                addOne = true;
            }
            else if(a[i] == '0' && b[i] == '1'){
                //add one too
                addOne = true;
            }
            else{
                //add zero
                addOne = false;
            }
        }
        
        carryOn = false;
        counter++;
    }
   
}