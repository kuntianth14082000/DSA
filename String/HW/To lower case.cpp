//Best solution : 0ms
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] += ('a' - 'A');
        }
        return s;
    }
};

// 1ms ----------------------------------------------------
class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        for(auto  ch : s) {
            ans+=tolower(ch);
        }
        return ans;
    }
};

//2ms ----------------------------------------------------
class Solution {
public:
    string toLowerCase(string s) {
       for(auto &it:s)
       if(it>='A'&&it<='Z')
       it^=32;
       return s; 
    }
};

//My solution ----------------------------------------------------
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90){
                s[i] = s[i]+32;
            }
        }
        return s;
    }
};
