// class Node{
//     public:
//     int data;
//     Node *next;
   
//     Node()
//     {
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int key)
//     {
//         this->data=key;
//         this->next=NULL;
//     }
// };
// class MyCircularDeque {
//     Node *head;
//     int limit,size;
// public:
//     MyCircularDeque(int k) {
//         head=NULL;
//         limit=k;
//         size=0;
//     }
    
//     bool insertFront(int value) {
//         if(size>=limit)
//         return false;
//         Node *newnode=new Node(value);
//         newnode->next=head;
//         head=newnode;
//         size+=1;
//         return true;
//     }
    
//     bool insertLast(int value) {
//         if(size>=limit)
//         return false;
//          Node *newnode=new Node(value);
//          if(head==NULL)
//          {
//              head=newnode;
//              size+=1;
//              return true;
//          }
//          Node *cur=head;
//          while(cur->next!=NULL)
//          {
//              cur=cur->next;
//          }
//          cur->next=newnode;
//          size+=1;
//          return true;
//     }
    
//     bool deleteFront() {
//         if(head==NULL)
//         return false;
//         if(head->next==NULL)
//         {
//             head=NULL;
//             size-=1;
//             return true;
//         }
//         head=head->next;
//         size-=1;
//         return true;
//     }
    
//     bool deleteLast() {
//         if(head==NULL)
//         return false;
//         if(head->next==NULL)
//         {
//             head=NULL;
//             size-=1;
//             return true;
//         }
//         Node *cur=head;
//         while(cur->next->next!=NULL)
//         {
//             cur=cur->next;
//         }
//         cur->next=NULL;
//         size-=1;
//         return true;
//     }
    
//     int getFront() {
//         if(head==NULL)
//         return -1;
//         return head->data;
//     }
    
//     int getRear() {
//         if(head==NULL)
//         return -1;
//         Node *cur=head;
//         while(cur->next!=NULL)
//         {
//             cur=cur->next;
//         }
//         return cur->data;
//     }
    
//     bool isEmpty() {
//         return size==0;
//     }
    
//     bool isFull() {
//         return size>=limit;
//     }
// };
