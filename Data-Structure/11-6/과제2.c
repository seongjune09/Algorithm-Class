// 2. 전위, 중위, 후위 순회 하나의 프로그램 안에서 출력(Node N1={10, &N2, &N3} 이렇게 초기화해서 만들어도 됨)

// 전위

void preorder(Node *node)
{

    if (node == NULL)
        return;
    printf("%d", node->data);
    predorder(node->left);
    preorder(node->right);
}

// 중위

void

    // 후위