#include <iostream>
#include <vector>
#include <string>
using std::vector, std::string, std::to_string, std::cout;


vector<string> fizzBuzz(int n){
    vector<string> buzzFizz;
    for(int i=1;i<=n;i++){
        if(i%15==0){
            buzzFizz.push_back("FizzBuzz");
        }
        else if(i%3==0)
            buzzFizz.push_back("Fizz");
        else if(i%5==0)
            buzzFizz.push_back("Buzz");
        else{
            buzzFizz.push_back(to_string(i));
            
        }
        // cout<<i%3<<": "<<i%5<<"\n";
    }
    for(int i=0;i<buzzFizz.size();i++){
        cout<<buzzFizz.at(i)<<", ";
    }
    return buzzFizz;
}