var searchBST = function(root, val)
{
    while (root !== null &&root.val !== val)
    {

        if (val < root.val)
        {
            root = root.left;
        }
        else
        {
            root = root.right;
        }
    }

    return root;
};
