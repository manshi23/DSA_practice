class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>st;
        for(int i=0;i<matrix.size();i++){
            st.push_back(matrix[i][0]);
        }
        int m=upper_bound(st.begin(),st.end(),target)-st.begin()-1;
        if(m<0){
            return false;
        }
        return binary_search(matrix[m].begin(),matrix[m].end(),target);
    }
    
};
