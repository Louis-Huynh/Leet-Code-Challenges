struct node
{
    int val;
    node *right;
    node *left;
};

node *searchBST(node *root, int val)
{
    if (root != nullptr)
    {
        if (val == root->val)
        {
            return root;
        }
        else if (val < root->val)
        {
            return searchBST(root->left, val);
        }
        else
        {
            return searchBST(root->right, val);
        }
    }
    else
    {
        return nullptr;
    }
}
