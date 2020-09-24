#include <iostream>
#include <string>
#include <stack>
using std::string, std::stack, std::cout;

bool isValid(string s){
    std::stack<char> stack;

    for(int i=0;i<s.length();i++){
        if(s[i]=='[')
            stack.push('[');
        else if(s[i]=='{')
            stack.push('{');
        else if(s[i]=='(')
            stack.push('(');
        else{
            if(!stack.empty()){

                if(s[i] == ']' && stack.top() == '['){
                    stack.pop();
                }
                else if(s[i] == ')' && stack.top() == '('){
                    stack.pop();
                }
                else if(s[i] == '}' && stack.top() == '{'){
                    stack.pop();
                }
                else{
                    return false;
                }

            }
            else{
                return false;
            }
            
        }

        
    }
    if(stack.empty()){
        cout<<"Success!\n";
        return true;
    }
    return false;


}
