// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(){
//         this->data=0;
//     this->next=NULL;
//     }
//     Node(int data)
//     {
//         this->data=data;
//         this->next=NULL;
//     }

// };
// class MyHashSet {
//     Node *head;
// public:
//     MyHashSet() {
//         head=NULL;
//     }
    
//     void add(int key) {
//         Node *newnode=new Node(key);
//         if(head==NULL)
//         {
//             head=newnode;
//             return;
//         }
//         Node *temp=head;
//         while(temp->next!=NULL)
//         {
//             temp=temp->next;
//         }
//         temp->next=newnode;
//     }
    
//     void remove(int key) {
//         if(head==NULL)
//         return;
//         if(head->data==key)
//         head=head->next;

//         Node *cur=head,*prev=NULL;
//         while(cur!=NULL)
//         {
//             if(cur->data==key)
//             {
//                 prev->next=cur->next;
//             }
//             else
//             prev=cur;

//             cur=cur->next;
//         }

        
//     }
    
//     bool contains(int key) {
//         if(head==NULL)
//         return false;
//         Node *cur=head;
//         while(cur!=NULL)
//         {
//             if(cur->data==key)
//             return true;

//             cur=cur->next;
//         }
//         return false;
//     }
// };

// /**
//  * Your MyHashSet object will be instantiated and called as such:
//  * MyHashSet* obj = new MyHashSet();
//  * obj->add(key);
//  * obj->remove(key);
//  * bool param_3 = obj->contains(key);
//  */