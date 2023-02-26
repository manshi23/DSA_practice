class Solution {
public:
    string reverseWords(string s) {
       string res,word;
       stringstream ss(s);
       while(ss>>word){
           res=word+" "+res;
       }
       return res.substr(0,res.size()-1);
    }
};
