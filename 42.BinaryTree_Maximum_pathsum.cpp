class Solution {
public:
    int height(TreeNode*root, int&sum){
        if(root==NULL){
            return 0;
        }
        int lh=height(root->left,sum);
        int rh=height(root->right,sum);
        sum=max(sum,lh+rh+root->val);
        int s=root->val+max(lh,rh);
        if(s<=0){
            s=0;
        }
        return s;
    }
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        height(root,sum);
        return sum;
    }
};
