class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
       
        string temp;
         stringstream ss(s);
        while(ss>>temp){
            st.push(temp);
        }
        string ans="";
        while(st.size()>0){
            ans+=st.top();
            st.pop();
            if(st.size()!=0) ans+=" ";
        }
        return ans;
    }
};
