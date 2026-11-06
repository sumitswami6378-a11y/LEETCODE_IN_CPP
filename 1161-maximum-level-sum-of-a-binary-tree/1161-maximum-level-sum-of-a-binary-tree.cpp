/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {

        if(root == NULL){
            return 0;
        }

        queue<TreeNode*> q;
        q.push(root);
        int level = 1;

        vector<int> ans;
        vector<int> levels;

        while(!q.empty()){

            int n = q.size();
            int sum_nodes = 0;
          //  int sum = 0;
            
            while(n--){
               
               TreeNode* temp = q.front();
               q.pop();

               sum_nodes += temp->val;

              if(temp->left){
                q.push(temp->left);
              }
              if(temp->right){
                q.push(temp->right);
              }
                     
            }

            
            ans.push_back(sum_nodes);

            levels.push_back(level);

            level++;
        }

        int index = max_element(ans.begin(), ans.end()) - ans.begin();

        return levels[index];
        
    }
};