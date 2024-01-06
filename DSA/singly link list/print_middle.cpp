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

void print_middle(Node *head, int cnt)
{
    int mid = (cnt / 2.0);
    Node *temp = head;

    if (mid % 2 == 0)
    {
        for (int i = 0; i <= mid - 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val;
    }
    else
    {
        for (int i = 0; i < mid - 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val;
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

    int val, cnt = 0;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        else
        {
            insert_tail(head, tail, val);
            cnt++;
        }
    }
    print_middle(head, cnt);
    return 0;
}