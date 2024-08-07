class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
            else{
                if(st.size()==0) return false;
                if(s[i]==')'){
                    if(st.top()!='(') return false;
                    else st.pop();
                }
                else if(s[i]=='}'){
                    if(st.top()!='{') return false;
                    else st.pop();
                }
                else if(s[i]==']'){
                    if(st.top()!='[') return false;
                    else st.pop();
                }
               
            }
        }
        return st.size()==0;
    }
};
