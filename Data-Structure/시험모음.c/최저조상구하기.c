// int findLCA(Node *root, int value1, int value2)
// {
//     if (root == NULL)
//     {
//         return -1;
//     }

//     if (value1 < root->data && value2 < root->data)
//     {
//         return findLCA(root->left, value1, value2);
//     }

//     if (value1 > root->data && value2 > root->data)
//     {
//         return findLCA(root->right, value1, value2);
//     }

//     return root->data;
// }