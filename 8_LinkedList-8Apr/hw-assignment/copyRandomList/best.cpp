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

Node *helper(Node *head, unordered_map<Node *, Node *> &mp)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *newHead = new Node(head->val);
    mp[head] = newHead;
    newHead->next = helper(head->next, mp);
    if (head->random)
    {
        newHead->random = mp[head->random];
    }

    return newHead;
}

Node *copyRandomList(Node *head)
{
    if (!head)
    {
        return NULL;
    }

    Node *it = head;
    //    ? step1: clone
    while (it)
    {
        Node *cloneNode = new Node(it->val);
        cloneNode->next = it->next;
        it->next = cloneNode;
        it = it->next->next;
    }
    //? step2 : assign random node
    it = head;
    while (it)
    {
        Node *cloneNode = it->next;
        cloneNode->random = it->random ? it->random->next : NULL; //^ focus if not random
        it = it->next->next;
    }
    //? step3 :  detach A' form A
    it = head; // M forgot
    Node *cloneHead = it->next;

    while (it )
    {

        Node * cloneHead =  it->next;
        it->next = it->next->next;//^ it next change 
        if (cloneHead->next)
        {
            cloneHead->next = cloneHead->next->next;
        }
        
        it = it->next;//^ next list -> auto take 2 step -=> it->next above set pointing
    }
    return cloneHead; //^ how to return if local scope
}
int main()
{
    // flatten()
    return 0;
}
