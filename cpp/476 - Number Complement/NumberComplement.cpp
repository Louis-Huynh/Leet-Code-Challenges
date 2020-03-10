#include <iostream>
#include <math.h>
#include <vector>
using std::vector;
using std::cout;

int findComplement(int num){
    
    bool binaryConvert=false;
    int quotient=-1, remainder=-1;
    int dividend=num;
    vector<int> initBinary;
    

    while(!binaryConvert){
        if(quotient==0){
            binaryConvert = true;
            break;
        }
        quotient = dividend/2;
        remainder = dividend%2;
        initBinary.push_back(remainder);
        dividend = quotient;
    }
    for(int i=0;i<initBinary.size();i++){
        cout<<initBinary[initBinary.size()-1-i];
    }

    for(int i=0;i<initBinary.size();i++){
        if(initBinary[i]==1)
            initBinary[i] = 0;
        else{
            initBinary[i] = 1;
        }
    }
    cout<<"\n";

    for(int i=0;i<initBinary.size();i++){
        cout<<initBinary[initBinary.size()-1-i];
    }
    
    cout<<"\n";
    int noBinSize = initBinary.size()-1;
    int temp = noBinSize;
    int compNum=0;
    for(int i=0;i<initBinary.size();i++){
        if(temp==-1)
            break;
        compNum += initBinary[noBinSize-i]*pow(2,temp);
        cout<<initBinary[noBinSize-i]*pow(2,temp)<<":"<<noBinSize-i<<"\n";
        temp--;
    }
    
    cout<<"complement: "<<compNum<<"\n";

    return 0;

}
