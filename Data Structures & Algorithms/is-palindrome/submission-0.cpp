class Solution {
public:
    bool isPalindrome(string s) {
        for(char &c : s) {
        c = tolower(c);
    }
    string ans = "";

    for(int i = 0;i<s.size();i++){
        if(isalnum(s[i])) ans+=s[i];
    }

    int left = 0,right = ans.size()-1;
    while(left<=right){
        if(ans[left]!=ans[right]){
            return false;
        }
        left++,
        right--;
    }
    return true;
    }
};
