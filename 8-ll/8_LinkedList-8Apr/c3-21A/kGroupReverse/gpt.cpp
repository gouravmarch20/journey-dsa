#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Check if the list is empty or only one node left
        ListNode* temp = head;
        int count = 0;
        while (temp != nullptr && count < k) {
            temp = temp->next;
            count++;
        }

        if (count < k) {
            // If the remaining nodes are less than k, no need to reverse
            return head;
        }

        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *forward = nullptr;
        int i = 0;

        // Reverse k nodes
        while (i < k) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            i++;
        }

        // Recursively reverse the next k nodes
        if (forward != nullptr) {
            head->next = reverseKGroup(forward, k);
        }

        // prev will now be the new head of the reversed k-group
        return prev;
    }
};

int main() {
    // Create a sample linked list for testing
    ListNode* head = new ListNode(1);
    ListNode* current = head;
    for (int i = 2; i <= 5; i++) {
        current->next = new ListNode(i);
        current = current->next;
    }

    int k = 3;

    Solution solution;
    ListNode* reversedHead = solution.reverseKGroup(head, k);

    // Print the reversed linked list
    std::cout << "Reversed Linked List: ";
    while (reversedHead != nullptr) {
        std::cout << reversedHead->val << " ";
        reversedHead = reversedHead->next;
    }
    std::cout << std::endl;

    // Clean up the allocated memory
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
