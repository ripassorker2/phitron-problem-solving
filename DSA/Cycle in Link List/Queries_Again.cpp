#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    printf("\n");
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;     // 100->30
    tmp->next = newNode;           // 20->100
    newNode->next->prev = newNode; // 100<-30
    newNode->prev = tmp;           // 20<-100
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int test;
    cin >> test;

    while (test--)
    {
        int pos, val;
        cin >> pos >> val;

        if (size(head) < pos)
        {
            cout << "Invalid\n";
        }
        else if (pos == 0)
        {
            insert_head(head, tail, val);
            cout << "L -> ";
            print_list(head);
            cout << "R -> ";
            print_reverse(tail);
        }
        else if (size(head) == pos)
        {
            insert_tail(head, tail, val);
            cout << "L -> ";
            print_list(head);
            cout << "R -> ";
            print_reverse(tail);
        }
        else
        {

            insert_at_position(head, pos, val);
            cout << "L -> ";
            print_list(head);
            cout << "R -> ";
            print_reverse(tail);
        }
    }

    return 0;
}