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
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *left;
        Node *right;

        (l == -1) ? left = NULL : left = new Node(l);
        (r == -1) ? right = NULL : right = new Node(r);

        p->left = left;
        p->right = right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}
int cnt = 0;

void getLength(Node *root)
{
    if (root == NULL)
        return;
    cnt++;
    getLength(root->left);
    getLength(root->right);
}

int main()
{
    Node *root = getInput();
    int depth = maxHeight(root);
    int needNode = pow(2, depth) - 1;
    getLength(root);

    (needNode == cnt) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}