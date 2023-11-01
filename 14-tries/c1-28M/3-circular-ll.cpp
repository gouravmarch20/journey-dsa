#include <iostream>

class Node {
 public:
  int data;
  Node* next;

  Node(int value) : data(value), next(nullptr) {}
};

class CircularLinkedList {
 private:
  Node* head;

 public:
  CircularLinkedList() : head(nullptr) {}

  void append(int data) {
    Node* new_node = new Node(data);
    if (!head) {
      head = new_node;
      head->next = head;
    } else {
      Node* temp = head;
      while (temp->next != head) {
        temp = temp->next;
      }
      temp->next = new_node;
      new_node->next = head;
    }
  }

  void printList() {
    if (!head) {
      std::cout << "List is empty" << std::endl;
      return;
    }

    Node* temp = head;
    do {
      std::cout << temp->data << " ";
      temp = temp->next;
    } while (temp != head);
    std::cout << std::endl;
  }
};

int main() {
  CircularLinkedList circularList;
  circularList.append(1);
  circularList.append(2);
  circularList.append(3);
  circularList.append(4);

  std::cout << "Circular Linked List:" << std::endl;
  circularList.printList();

  return 0;
}
