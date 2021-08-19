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
    long long answer=0,sumNode=0;
public:
    int Sum(TreeNode *root)
    {
        long long sum=0;
        if(root==NULL)return 0;
        sum+=root->val;
        return sum+=Sum(root->right)+Sum(root->left);
    }
    
    long long ans(TreeNode* root)
    {
        if(root==NULL)return 0;
        long long leftsum=0,rightsum=0;
        if(root->left!=NULL){
            leftsum=ans(root->left);
            answer=max(answer,((sumNode-leftsum)*leftsum));
        }
        if(root->right!=NULL){
            rightsum=ans(root->right);
            answer=max(answer,((sumNode-rightsum)*rightsum));
        }
        return rightsum+leftsum+root->val;
    }

    
    int maxProduct(TreeNode* root) {
        answer=0;
        sumNode=Sum(root);
        ans(root);
        answer%=(1000000007);
        return answer;    
    }
};