class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int> >ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>v;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*front=q.front();
                q.pop();
                if(front->left)q.push(front->left);
                if(front->right)q.push(front->right);
                v.push_back(front->val);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
