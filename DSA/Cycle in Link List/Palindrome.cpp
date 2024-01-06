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
void print_List(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    printf("\n");
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *temp = tail;

    temp->next = newNode;
    newNode->prev = temp;
    tail = newNode;
}
bool is_palindrome(Node *head, Node *tail)
{
    if (head->next == NULL || tail->prev == NULL)
        return true;

    while (head && tail)
    {
        if (head->val != tail->val)
            return false;

        head = head->next;
        tail = tail->prev;
    }

    return true;
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
        insert_tail(head, tail, val);
    }
    bool res = is_palindrome(head, tail);
    res ? cout << "YES\n" : cout << "NO\n";
    return 0;
}