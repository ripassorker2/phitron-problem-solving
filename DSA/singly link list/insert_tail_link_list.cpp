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

void insert_in_tail(Node *&head, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        cout << "\n\nHead inserted successfully...\n\n";
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    cout << "\n\nInserted in tail successfully...\n\n";
}

void insert_at_head(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insert_any_positon(Node *head, int pos, int val)
{
    Node *new_node = new Node(val);

    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;

    cout << "\n\n Inserted successfully at position" << pos << "\n\n";
}

void delete_any_pos(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
    cout << "\n\n Delete successfully at position " << pos << endl;
}

void delete_head(Node *&head)
{
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
    cout << "\n\n Delete successfully head;..... " << endl;
}

void print_list(Node *head)
{
    Node *temp = head;
    cout << endl;
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

    while (true)
    {
        cout << "\n\nEntet 1 for insert in tail...\n";
        cout << "Entet 2 for show list...\n";
        cout << "Entet 3 for insert any position...\n";
        cout << "Entet 4 for delete any position...\n";
        cout << "Entet 0 close..\n\n";
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "Enter a value  " << endl;
            int x;
            cin >> x;
            insert_in_tail(head, x);
        }
        else if (n == 2)
            print_list(head);
        else if (n == 3)
        {
            int pos, val;
            cout << "Enter position  : " << endl;
            cin >> pos;
            cout << "Enter value  : " << endl;
            cin >> val;
            if (pos == 0)
                insert_at_head(head, val);
            else
                insert_any_positon(head, pos, val);
        }
        else if (n == 4)
        {
            int pos;
            cout << "\n\nEnter the position  : ";
            cin >> pos;

            if (pos == 0)
                delete_head(head);
            else
                delete_any_pos(head, pos);
        }

        else if (n == 0)
            break;
    }

    return 0;
}