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

int size(Node *root)
{
    if (root == NULL)
        return 0;

    int l = size(root->left);
    int r = size(root->right);
    return l + r + 1;
}

void print_tree(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. line theke ber kore ana,
        Node *f = q.front();
        q.pop();

        // 2. all work for done here.
        cout << f->val << " ";

        // 3. put her children in queue.
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = getInput();
    print_tree(root);

    cout << endl;
    return 0;
}