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

bool search(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->val == val)
        return true;
    if (root->val > val)
        return search(root->left, val);
    if (root->val < val)
        return search(root->right, val);
}

int main()
{

    Node *root = getInput();
    // print_tree(root);

    search(root, 30) ? cout << "NO" << endl : cout << "YES" << endl;
    return 0;
}