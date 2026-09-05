class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        
        for(int i = 0; i < s.length(); i++) {
            char c = s[i];
            
            if (c == '(' || c == '[' || c == '{') {
                mystack.push(c);
            } 
            else {
                if(mystack.empty()) {
                    return false;
                }
                
                char topchar = mystack.top();
                if((c == ')' && topchar == '(') || 
                   (c == ']' && topchar == '[') || 
                   (c == '}' && topchar == '{')) {
                    mystack.pop();
                } 
                else {
                    return false;
                }
            }
        }
        
        return mystack.empty();
    }
};