#include <iostream>
#include <math.h>
using std::cout;


int findComplement(int num){
    
    bool binaryConvert=false;
    int quotient=-1, remainder=-1;
    int dividend=num;
    int noIteration=0, initBinary=0;

    while(!binaryConvert){
        if(quotient==0)
            binaryConvert = true;

        quotient = dividend/2;
        remainder = dividend%2;
        initBinary += remainder*(pow(10,noIteration));//overflow
        dividend = quotient;
        noIteration++;
    }
    cout<<"number: "<<num<<" binary: "<<initBinary<<"\n";
    return 0;

}
