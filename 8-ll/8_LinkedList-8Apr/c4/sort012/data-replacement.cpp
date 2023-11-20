#include <iostream>
#include <vector>

using namespace std;
class ListNode {
 public:
  int val;
  ListNode *prev;
  ListNode *next;
  ListNode() {
    this->val = 0;
    this->prev = NULL;
    this->next = NULL;
  }
  ListNode(int val) {
    this->val = val;
    this->prev = NULL;
    this->next = NULL;
  }
};
void print(ListNode *&head) {
  ListNode *temp = head;
  while (temp != NULL) {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}
int getLength(ListNode *&head) {
  int c = 0;
  ListNode *temp = head;
  while (temp != NULL) {
    temp = temp->next;
    c++;
  }
  return c;
}

ListNode *create_linked_list(vector<int> arr, int n) {
  ListNode *head = nullptr;
  ListNode *tail = nullptr;

  for (int i = 0; i < n; i++) {
    ListNode *new_node = new ListNode(arr[i]);
    if (!head) {
      head = new_node;
      tail = new_node;
    } else {
      tail->next = new_node;
      tail = new_node;
    }
  }

  return head;
}
ListNode *sort012(ListNode *list1) {
  int countZero = 0;
  int countOne = 0;
  int countTwo = 0;
  ListNode *temp = list1;
  while (temp != NULL) {
    int val = temp->val;
    if (val == 0) {
      countZero++;
    } else if (val == 1) {
      countOne++;
    } else if (val == 2) {
      countTwo++;
    }
    temp = temp->next;
  }

  //^ way1
  temp = list1;
  while (countZero--) {
    temp->val = 0;
    temp = temp->next;
  }
  while (countOne--) {
    temp->val = 1;
    temp = temp->next;
  }
  while (countTwo--) {
    temp->val = 2;
    temp = temp->next;
  }
  return list1;

  // ^ way2 :
  // while (temp != NULL)
  // {

  //     if (--countZero >= 0 )
  //     {
  //         temp->val = 0;
  //     }
  //     else if (--countOne >= 0)
  //     {
  //         temp->val = 1;
  //     }
  //     else if (--countTwo >= 0)
  //     {
  //         temp->val = 2;
  //     }
  //     temp = temp->next;
  // }
}
int main() {
  // vector<int> arr1 = {1, 0, 0};
  vector<int> arr1 = {0, 1, 0, 2, 1, 1};

  ListNode *list1 = create_linked_list(arr1, arr1.size());

  print(list1);
  ListNode *l1 = sort012(list1);
  print(l1);

  return 0;
}
