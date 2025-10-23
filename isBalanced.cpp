class Solution {
public:
    int height(TreeNode* root, bool &valid){
        if(!root) return 0;
        
        int l= height(root->left,valid);
        // suppose   nahi valid hoga to cycle skip hoga aur return false; 
        if(valid){
        int r= height(root->right,valid);
        // balance checking
        if(abs(l-r)>1)
            valid=0;
        
        return 1+max(l,r);// height calculate 
        }
        return 0;
    }
    bool isBalanced(TreeNode* root) {
        bool valid=1;
        height(root,valid);
        return valid;
    }
};
