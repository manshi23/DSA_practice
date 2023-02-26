class Solution {
public:
    void found(TreeNode*root,vector<int>&v){
        if(root==NULL){
            return ;
        }
        found(root->left,v);
        found(root->right,v);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
    vector<int>v;
    found(root,v);
    return v;
    }
};
