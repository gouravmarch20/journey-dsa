#include <iostream>
#include <vector>

using namespace std;
class Node
{
public:
    int val;
    Node *random;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->random = NULL;
    }
};
// ^ map use as &
Node *helper(Node *head, unordered_map<Node *, Node *> &mp)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *newHead = new Node(head->val);
    mp[head] = newHead;
    newHead->next = helper(head->next, mp);//M2
    // M1 : make sure if exit the only point
    if (head->random)
    {
        newHead->random = mp[head->random];
    }

    return newHead;
}

Node *copyRandomList(Node *head)
{
    unordered_map<Node *, Node *> mp;

   
    return  helper(head, mp);
}
int main()
{
    // flatten()
    return 0;
}
