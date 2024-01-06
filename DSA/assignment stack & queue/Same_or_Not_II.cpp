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

class myStack
{
public:
    int sz = 0;
    Node *head = NULL;
    Node *tail = NULL;

    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);
        sz++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        if (head == NULL)
        {
            return;
        }
        Node *deleleNode = tail;
        tail = tail->prev;

        if (tail == NULL)
            head = NULL;
        else
            tail->next = NULL;

        delete deleleNode;
        sz--;
    }
    int top()
    {
        if (!empty())
            return tail->val;
        return -1;
    }
};

class myQueue
{
public:
    int sz = 0;
    Node *head = NULL;
    Node *tail = NULL;

    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);
        sz++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        if (head == NULL)
        {
            return;
        }
        Node *deleleNode = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        else
            head->prev = NULL;

        delete deleleNode;
        sz--;
    }
    int front()
    {
        if (!empty())
            return head->val;
        return -1;
    }
};

int main()
{

    // myStack st;
    // st.push(1);
    // st.push(2);
    // st.push(3);

    // if (!st.empty())
    // {

    //     cout << st.top();
    //     st.pop();
    //     cout << st.top();
    //     st.pop();
    //     cout << st.top();
    // }

    myStack st;
    myQueue q;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    bool flag = true;

    if (m != n)
        flag = false;
    else
    {
        while (!q.empty() || !st.empty())
        {
            if (st.top() != q.front())
                flag = false;
            st.pop();
            q.pop();
        }
    }

    flag ? cout << "YES\n" : cout << "NO\n";

    return 0;
}