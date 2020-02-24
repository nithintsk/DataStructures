vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    stack<TreeNode*> stk;
    while(root || !stk.empty()) {
        while(root) {
            stk.push(root);
            root = root->left;
        }
        root = stk.top();
        result.push_back(root->val);
        stk.pop();
        root = root->right;
    }
    return result;
}
