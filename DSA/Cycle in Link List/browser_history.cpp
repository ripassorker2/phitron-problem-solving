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

class BrowserHistory
{
public:
    Node *cur;
    BrowserHistory(string homepage)
    {
        cur = new Node(homepage);
    }

    void visit(string url)
    {
        Node *newNode = new Node(url);
        cur->next = newNode;
        newNode->prev = cur;
        cur = newNode;
    }

    string back(int steps)
    {
        while (cur->prev != NULL && steps > 0)
        {
            cur = cur->prev;
            steps--;
        }
        return cur->val;
    }

    string forward(int steps)
    {
        while (cur->next != NULL && steps > 0)
        {
            cur = cur->next;
            steps--;
        }
        return cur->val;
    }
};

int main()
{

    cout << endl;
    return 0;
}