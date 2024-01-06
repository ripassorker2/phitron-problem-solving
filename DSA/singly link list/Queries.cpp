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

void insert_head(Node *&head, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    new_node->next = head;
    head = new_node;
}
void insert_tail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}
void delete_any_pos(Node *head, int pos)
{
    Node *temp = head;
    if (temp == NULL)
        return;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
            return;
    }
    if (temp->next == NULL)
        return;

    Node *delete_node = temp->next;
    temp->next = temp->next->next;

    delete delete_node;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
}

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int s, val;
        cin >> s;
        cin >> val;
        if (s == 0)
        {
            insert_head(head, val);
            // cout << "head";
        }
        else if (s == 1)
        {
            insert_tail(head, val);
        }
        else if (s == 2)
        {
            if (val == 0)
                delete_head(head);
            else
                delete_any_pos(head, val);
        }
        print_list(head);
        // cout << head->val;
    }

    cout << endl;
    return 0;
}