bool isValid(string s) {
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
                    cout<<"No ressembling char! \n";
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
    cout<<"error not empty so bad\n";
    return false;

}