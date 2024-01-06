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
vector<int> v;
void traverse(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        v.push_back(root->val);
    traverse(root->left);
    traverse(root->right);
}

int main()
{
    Node *root = getInput();
    traverse(root);
    sort(v.begin(), v.end(), greater<int>());
    for (auto element : v)
        cout << element << " ";

    return 0;
}