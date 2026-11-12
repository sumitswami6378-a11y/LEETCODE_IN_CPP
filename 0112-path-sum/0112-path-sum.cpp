class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        if(root == NULL){
            return false;
        }

        queue<pair<TreeNode*, int>> q;

        q.push({root, root->val});

        while(!q.empty()){

            TreeNode* temp = q.front().first;
            int sum = q.front().second;

            q.pop();

            if(temp->left == NULL && temp->right == NULL){

                if(sum == targetSum){
                    return true;
                }
            }

            if(temp->left){
                q.push({temp->left, sum + temp->left->val});
            }

            if(temp->right){
                q.push({temp->right, sum + temp->right->val});
            }
        }

        return false;
    }
};