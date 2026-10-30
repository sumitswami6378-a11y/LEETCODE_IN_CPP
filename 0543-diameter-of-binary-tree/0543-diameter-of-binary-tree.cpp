class Solution {
    public:
    int height(TreeNode* root){

          if(root == NULL){

            return 0;
        }

        int lh = height(root->left);
        int rh = height(root->right);

        return max(lh,rh) + 1;

    }
public:
    int diameterOfBinaryTree(TreeNode* root) {

        if(root == NULL){

            return 0;
        }

        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);

        int combo = height(root->left) + height(root->right);


        return max(combo,max(left,right));

        
    }
};