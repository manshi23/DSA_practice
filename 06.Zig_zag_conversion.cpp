class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1){return s;}
        int dir=-1;
        vector<string>v(numRows,"");
        int i=0;int j=0;
        while(i<s.length()){
            if(j==0||j==numRows-1){
                dir*=-1;
            }
            v[j]+=s[i];
            if(dir==1){j++;}else{j--;}
            i++;
        }
        string res="";
        for(auto it:v){
            res+=it;
        }
        return res;
    }
};
