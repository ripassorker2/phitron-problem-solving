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

Node *convert(int arr[], int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *node = new Node(arr[mid]);
    Node *left = convert(arr, l, mid - 1);
    Node *right = convert(arr, mid + 1, r);
    node->left = left;
    node->right = right;
    return node;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Node *root = convert(arr, 0, n - 1);

    print_tree(root);

    cout << endl;
    return 0;
}