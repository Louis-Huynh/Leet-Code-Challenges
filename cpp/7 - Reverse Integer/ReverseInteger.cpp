#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
using std::vector;
using std::string;
using std::to_string;
using std::cout;


class Solution {
public:
    int reverse(int numb) {
        
        if(numb>(pow(2,31)-1) || numb < -pow(2,31)){
            
            return 0;
        }
       
        bool negative = false;
        long longNumb = numb;
        if(longNumb<0){
            negative = true;
            longNumb = longNumb * -1;
        }
        
        else if(longNumb == 0)
            return 0;
              
       int op;
        string yoplait = "";
        while(abs(longNumb)>0){
            op = longNumb % 10;
            longNumb = (int)(longNumb/10);
            yoplait.append(to_string(op));
    }
        
        long soonReversedInt;
        
        try{
                soonReversedInt = stol(yoplait);            
        }
        catch(const std::exception& e){
        cout<<"Error here bud\n";
     }        
        if(negative){
            soonReversedInt = soonReversedInt * -1;
        }
        
        if(soonReversedInt>(pow(2,31)-1) || soonReversedInt < -pow(2,31)){
            return 0;
        }
        
        else{
            return soonReversedInt;
        }
  
    }
};