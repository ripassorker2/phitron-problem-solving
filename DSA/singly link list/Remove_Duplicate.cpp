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

void insert_in_tail(Node *&head, Node *&tail, int val)
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

void remove_duplicate(Node *head)
{
    Node *temp = head;
    int value;

    for (Node *i = temp; i != NULL; i = i->next)
    {
        for (Node *j = temp->next; j != NULL; j = j->next)
        {
            if (i->val == j->val)
                j->next = j->next->next;
        }
    }
}

void print_list(Node *head)
{
    printf("\n");
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    printf("\n");
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_in_tail(head, tail, val);
    }

    remove_duplicate(head);
    print_list(head);

    cout << endl;
    return 0;
}