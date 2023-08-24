// class RecentCounter {
//     Deque<Integer> q;
//     public RecentCounter() {
//         q=new ArrayDeque<>();
//     }
    
//     public int ping(int t) {
//         int range=t-3000;
//         q.addLast(t);
//         while(q.getFirst()<range){
//             q.removeFirst();
//         }
//         return q.size();
//     }
// }

// /**
//  * Your RecentCounter object will be instantiated and called as such:
//  * RecentCounter obj = new RecentCounter();
//  * int param_1 = obj.ping(t);
//  */