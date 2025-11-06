

// 전위

void preorder (Node *node) {

if (node == NULL) return;
printf("%d", node -> data);
predorder(node -> left);
preorder(node -> right);

}

// 중위

void 



// 후위