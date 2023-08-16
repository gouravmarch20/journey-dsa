#include <iostream>
#include <unordered_set>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int val) : val(val), next(nullptr) {}
};

ListNode* find_intersection(ListNode* head1, ListNode* head2) {
    // Create an unordered_set to store nodes from the first linked list
    std::unordered_set<ListNode*> node_set;

    // Traverse the first linked list and store nodes in the set
    ListNode* current = head1;
    while (current) {
        node_set.insert(current);
        current = current->next;
    }

    // Traverse the second linked list and check for intersection
    current = head2;
    while (current) {
        if (node_set.find(current) != node_set.end()) {
            return current;
        }
        current = current->next;
    }

    // If no intersection found, return nullptr
    return nullptr;
}

// Helper function to create a linked list from an array of values
ListNode* create_linked_list(int arr[], int n) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int i = 0; i < n; i++) {
        ListNode* new_node = new ListNode(arr[i]);
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

// Helper function to print the linked list
void print_linked_list(ListNode* head) {
    ListNode* current = head;
    while (current) {
        std::cout << current->val;
        if (current->next) {
            std::cout << " -> ";
        }
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage:
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {9, 8};
    int common_arr[] = {10, 11, 12};

    ListNode* list1 = create_linked_list(arr1, sizeof(arr1) / sizeof(arr1[0]));
    ListNode* list2 = create_linked_list(arr2, sizeof(arr2) / sizeof(arr2[0]));
    ListNode* common_node = create_linked_list(common_arr, sizeof(common_arr) / sizeof(common_arr[0]));

    ListNode* list1_tail = list1;
    while (list1_tail->next) {
        list1_tail = list1_tail->next;
    }
    list1_tail->next = common_node;

    ListNode* list2_tail = list2;
    while (list2_tail->next) {
        list2_tail = list2_tail->next;
    }
    list2_tail->next = common_node;

    // Find the intersection node
    ListNode* intersection_node = find_intersection(list1, list2);

    // Print the value of the intersection node
    if (intersection_node) {
        std::cout << "Intersection node value: " << intersection_node->val << std::endl;
    } else {
        std::cout << "No intersection found." << std::endl;
    }

    // Clean up the memory (don't forget to delete the dynamically allocated nodes)
    ListNode* current = list1;
    while (current) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
    current = list2;
    while (current) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
    // No need to delete common_node since it is shared by both lists and will be deleted above.

    return 0;
}
