// int getHeight(Node *node)
// {
//     if (node == NULL)
//     {
//         return 0;
//     }

//     int leftSubtreeHeight = getHeight(node->left);
//     int rightSubtreeHeight = getHeight(node->right);

//     if (leftSubtreeHeight > rightSubtreeHeight)
//     {
//         return leftSubtreeHeight + 1;
//     }
//     else
//     {
//         return rightSubtreeHeight + 1;
//     }
// }