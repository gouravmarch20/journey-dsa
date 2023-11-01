// class MedianFinder {
//     priority_queue<int>pq;
//     priority_queue<int,vector<int>,greater<int>>pq1;
//     int sz;
// public:
//     MedianFinder() {
//         sz=0;
        
//     }
    
//     void addNum(int num) {
//         if(sz==0)
//         {
//             pq.push(num);
//             sz++;
//         }
//         else if(pq.size()>pq1.size())
//         {
//             if(num<pq.top())
//             {
//                 pq1.push(pq.top());
//                 pq.pop();
//                 pq.push(num);
//             }
//             else
//             pq1.push(num);
//         }
//         else
//         {
//             if(pq1.top()<num)
//             {
//                 pq.push(pq1.top());
//                 pq1.pop();
//                 pq1.push(num);
//             }
//             else
//             pq.push(num);
//         }
       
//     }
    
//     double findMedian() {
//         if(pq.size()!=pq1.size())
//         return pq.top();
//         else
//         {
//             return (pq.top()+pq1.top())/2.0;
//         }
        
//     }
// };

// /**
//  * Your MedianFinder object will be instantiated and called as such:
//  * MedianFinder* obj = new MedianFinder();
//  * obj->addNum(num);
//  * double param_2 = obj->findMedian();
//  */