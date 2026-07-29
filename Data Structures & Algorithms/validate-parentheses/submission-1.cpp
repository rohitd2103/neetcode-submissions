class Solution {
public:
    void helper(char c, stack<char>& st){
        if(!st.empty()){
            if((c=='}' && st.top()=='{' )|| 
            (c==')' && st.top()=='(' )||
                (c==']' && st.top()=='[')){
                    st.pop();
                }
                
        }
    }
    bool isValid(string s) {
        int n = s.size();
        if(s.size()%2!=0) return false;

        stack<char> st;

        for(int i = 0 ;i<n;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else{
                char c = s[i];
                if(st.empty()) return false;

                if((c=='}' && st.top()=='{' )|| 
            (c==')' && st.top()=='(' )||
                (c==']' && st.top()=='[')){
                    st.pop();
                }else{
                    return false;
                }
            }
        }

        if(!st.empty()) return false;

        return true;
    }
};
