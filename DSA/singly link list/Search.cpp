#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}

int get_index(Node *head, int val)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {

        if (temp->val == val)
            return cnt;
        cnt++;
        temp = temp->next;
    }
    return -1;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;
    while (t--)
    {
        int val;

        while (true)
        {
            cin >> val;
            if (val == -1)
                break;

            insert_tail(head, tail, val);
        }
        int s;
        cin >> s;
        int in = get_index(head, s);
        cout << in << endl;
        head = NULL;
    }

    return 0;
}
