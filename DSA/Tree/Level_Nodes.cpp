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

int count_max_height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_max_height(root->left);
    int r = count_max_height(root->right);
    return max(l, r) + 1;
}

void level_traverse(Node *root, int val)
{

    if (root == NULL)
        return;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();

        Node *node = pr.first;
        int level = pr.second;

        if (level == val)
            cout << node->val << " ";

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
}
int main()
{
    Node *root = getInput();
    int val;
    cin >> val;
    int h = count_max_height(root) - 1;
    if (h >= val)
        level_traverse(root, val);
    else
        cout << "Invalid\n";

    cout << endl;
    return 0;
}