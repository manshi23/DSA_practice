class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> >v;
        if(numRows==1){
            return {{1}};
        }
        v.push_back({1});
        v.push_back({1,1});
        for(int i=2;i<numRows;i++){
            vector<int>vec;
            vec.push_back(1);
            for(int j=1;j<i;j++){
                vec.push_back(v[i-1][j-1]+v[i-1][j]);
            }
            vec.push_back(1);
            v.push_back(vec);
        }
        return v;
    }
};
