#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = left;
        this->right = right;
    }
};

Node *getInput()
{
    int val;
    cin >> val;
    Node *root;
    (val == -1) ? root = NULL : root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        // 1. get from line
        Node *p = q.front();
        q.pop();

        // 2. do all work
        int l, r;
        cin >> l >> r;

        Node *left;
        Node *right;

        (l == -1) ? left = NULL : left = new Node(l);
        (r == -1) ? right = NULL : right = new Node(r);

        p->left = left;
        p->right = right;

        // 3. push children in line

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int sum(Node *root)
{
    int s = 0;
    if (root == NULL)
        return s;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        if (node->left == NULL && node->right == NULL)
            s = s + 0;
        else
            s = s + node->val;

        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    return s;
}

int main()
{
    Node *root = getInput();
    cout << sum(root) << endl;
    return 0;
}