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

void printLeft(Node *root)
{
    if (root->left)
    {
        printLeft(root->left);
        cout << root->val << " ";
    }
    else if (root->right)
    {
        printLeft(root->right);
        cout << root->val << " ";
    }
    else
    {
        cout << root->val << " ";
    }
}
void printRight(Node *root)
{
    if (root->right)
    {
        cout << root->val << " ";
        printRight(root->right);
    }
    else if (root->left)
    {
        cout << root->val << " ";
        printRight(root->left);
    }
    else
    {
        cout << root->val << " ";
    }
}

int main()
{
    Node *root = getInput();

    if (root == NULL)
        return 0;

    if (root->left)
        printLeft(root->left);
    cout << root->val << " ";

    if (root->right)
        printRight(root->right);

    cout << endl;
    return 0;
}
