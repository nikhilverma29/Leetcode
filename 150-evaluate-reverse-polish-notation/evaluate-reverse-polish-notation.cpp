class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0; i<tokens.size(); i++){
            string current = tokens[i];
            if(current == "+" || current == "-" || current == "/" || current == "*"){
                int a1 = st.top();
                st.pop();
                int a2 = st.top();
                st.pop();
                if(current == "+"){
                    st.push(a2+a1);
                }
                else if(current == "-"){
                    st.push(a2-a1);
                }
                else if(current == "/"){
                    st.push(a2/a1);
                }
                else if(current == "*"){
                    st.push(a2*a1);
                }
                
            }
            else{
                    st.push(stoi(current));
                }
            
        }
        return st.top();
    }
};