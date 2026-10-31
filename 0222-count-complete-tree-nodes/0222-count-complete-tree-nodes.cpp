class Solution {
private:

    int leftHeight(TreeNode* root) {
        int h = 0;

        while(root != NULL) {
            h++;
            root = root->left;
        }

        return h;
    }

    int rightHeight(TreeNode* root) {
        int h = 0;

        while(root != NULL) {
            h++;
            root = root->right;
        }

        return h;
    }

public:

    int countNodes(TreeNode* root) {

        if(root == NULL) {
            return 0;
        }

        int lh = leftHeight(root);
        int rh = rightHeight(root);

        if(lh == rh) {
            return (1 << lh) - 1;
        }

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};