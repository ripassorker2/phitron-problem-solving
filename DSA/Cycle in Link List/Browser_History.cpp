#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *prev;
    Node *next;

    Node(string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, string val)
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

void visit(Node *head, Node *&curr, string val)
{
    Node *prevCurr = curr;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == val)
        {
            curr = temp;
            cout << temp->val << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Not Available\n";
    curr = prevCurr;
}

void prev(Node *&curr)
{
    if (curr->prev != NULL)
    {
        curr = curr->prev;
        cout << curr->val << endl;
        return;
    }
    else
        cout << "Not Available\n";
}

void next(Node *&curr)
{
    if (curr->next != NULL)
    {
        curr = curr->next;
        cout << curr->val << endl;
        return;
    }
    else
        cout << "Not Available\n";
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    Node *curr;

    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
            break;
        insert_tail(head, tail, val);
    }
    curr = head;
    int t;
    cin >> t;

    while (t--)
    {
        string chk;
        cin >> chk;
        if (chk == "visit")
        {
            string s;
            cin >> s;
            visit(head, curr, s);
        }
        if (chk == "prev")
            prev(curr);
        else if (chk == "next")
            next(curr);
    }

    return 0;
}