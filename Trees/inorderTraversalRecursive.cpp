vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    if(root == NULL) return result;
    inorderTraversalRecursive(root,result);
    return result;
}

void inorderTraversalRecursive(TreeNode* root, vector<int> &result) {
    if (root->left != NULL)
        inorderTraversalRecursive(root->left, result);
    result.push_back(root->val);
    if(root->right != NULL)
        inorderTraversalRecursive(root->right, result);
}
