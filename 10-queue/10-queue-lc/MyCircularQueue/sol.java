// class MyCircularQueue {
//     int[] arr;
//     int f=-1,r=-1,size=0;
//     public MyCircularQueue(int k) {
//         arr=new int[k];
//     }
    
//     public boolean enQueue(int value) {
//         if(size==arr.length){
//             return false;
//         }
//         else if(size==0){
//             f=0;r=0;
//             arr[0]=value;
//         }
//         else if(r<arr.length-1){
//             r++;
//             arr[r]=value;
//         }
//         else if(r==arr.length-1){
//             r=0;
//             arr[r]=value;
//         }
//         size++;
//         return true;
//     }
    
//     public boolean deQueue() {
//         if(size==0){
//             return false;
//         }
//         else if(f<arr.length-1){
//             f++;
//         }
//         else if(f==arr.length-1){
//             f=0;
//         }
//         size--;
//         return true;
//     }
    
//     public int Front() {
//         if(size==0) return -1;
//         return arr[f];
//     }
    
//     public int Rear() {
//         if(size==0) return -1;
//         return arr[r];
//     }
    
//     public boolean isEmpty() {
//         if(size==0) return true;
//         else return false;
//     }
    
//     public boolean isFull() {
//         if(size==arr.length) return true;
//         else return false;
//     }
// }

// /**
//  * Your MyCircularQueue object will be instantiated and called as such:
//  * MyCircularQueue obj = new MyCircularQueue(k);
//  * boolean param_1 = obj.enQueue(value);
//  * boolean param_2 = obj.deQueue();
//  * int param_3 = obj.Front();
//  * int param_4 = obj.Rear();
//  * boolean param_5 = obj.isEmpty();
//  * boolean param_6 = obj.isFull();
//  */