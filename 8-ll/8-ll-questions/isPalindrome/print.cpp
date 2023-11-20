#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Function to create a linked list and return the head
ListNode* createLinkedList(int arr[], int n) {
  if (n == 0) {
    return nullptr;
  }
  ListNode* head = new ListNode(arr[0]);
  ListNode* current = head;
  for (int i = 1; i < n; i++) {
    current->next = new ListNode(arr[i]);
    current = current->next;
  }
  return head;
}

// Function to print the linked list
void printLinkedList(ListNode* head) {
  ListNode* current = head;
  while (current) {
    cout << current->val << " ";
    current = current->next;
  }
  cout << endl;
}

class Solution {
 public:
  bool isPalindrome(ListNode* head) {
    // Step 1: Find the middle
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
    }
    // Odd length of ll --> 2nd half LL needs to start after the middle, so 1
    // step more
    if (fast != NULL && fast->next == NULL) {
      slow = slow->next;
    }

 
    ListNode* prev = NULL;
    while (slow && slow->next != NULL) {
      ListNode* temp = slow->next;
      slow->next = prev;
      prev = slow;
      slow = temp;
    }
    // Last one pending
    if (slow != NULL) {
      slow->next = prev;
    }

    cout << "Original Linked List: ";
    printLinkedList(head);
    cout << "Reversed Second Half: ";
    printLinkedList(slow);

    // Step 3: Compare
    ListNode* curr = head;
    while (curr && slow) {
      if (curr->val != slow->val) {
        return false;
      }
      curr = curr->next;
      slow = slow->next;
    }
    return true;
  }
};

int main() {
  int arr[] = {1, 2, 3, 2, 1};  // Replace with your input array
  int n = sizeof(arr) / sizeof(arr[0]);
  ListNode* head = createLinkedList(arr, n);

  Solution solution;
  bool isPal = solution.isPalindrome(head);

  if (isPal) {
    cout << "The linked list is a palindrome." << endl;
  } else {
    cout << "The linked list is not a palindrome." << endl;
  }

  return 0;
}
