class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int> >v;
    if(root==NULL){
        return v;
    }
    queue<TreeNode*>q;
    q.push(root);
    int flag=0;
    while(!q.empty()){
        int size=q.size();
        vector<int>vec;
        for(int i=0;i<size;i++){
            TreeNode*front=q.front();
            q.pop();
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
            vec.push_back(front->val);
        }
        if(flag==0){
            flag=1;
            v.push_back(vec);
        }
        else{
            flag=0;
            reverse(vec.begin(),vec.end());
            v.push_back(vec);
        }
    }
        return v;
    }
};
