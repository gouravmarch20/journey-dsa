// class MyCircularQueue {
//     int front,rear,size;
//     int *arr;
// public:
//     MyCircularQueue(int k) {
//         front=rear=-1;
//         size=k;
//         arr=new int[k];
//     }
    
//     bool enQueue(int value) {
//         if((front==0 && rear==size-1) ||((rear+1)%size==front))
//         return false;
//         if(front==-1)
//         {
//             front=rear=0;
//             arr[rear]=value;
//         }
//         else if(rear==size-1 && front!=0)
//         {
//             rear=0;
//             arr[rear]=value;
//         }
//         else
//         {
//             rear++;
//             arr[rear]=value;
//         }
//         return true;
//     }
    
//     bool deQueue() {
//         if(front==-1)
//         return false;
//         arr[front]=-1;
//         if(front==rear)
//         {
//             front=rear=-1;
//         }
//         else if(front==size-1)
//         {
//             front=0;
//         }
//         else
//         {
//             front++;
//         }
//         return true;
        
//     }
    
//     int Front() {
//         if(front==-1)
//         return -1;
//         return arr[front];
        
//     }
    
//     int Rear() {
//         if(front==-1)
//         return -1;
//         return arr[rear];
//     }
    
//     bool isEmpty() {
//         if(front==-1 && rear==-1)
//         return true;
//         else
//         return false;
//     }
    
//     bool isFull() {
//         if((front==0 && rear==size-1) ||((rear+1)%size==front))
//         return true;
//         else
//         return false;
//     }
// };
