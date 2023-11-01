// class Pair{
//     int x;
//     int y;
//     public Pair(int x,int y){
//         this.x=x;
//         this.y=y;
//     }
// }
// class Solution {
//     public int[] topKFrequent(int[] nums, int k) {
//         HashMap<Integer,Integer> h=new HashMap<>();
//         for(int i:nums){
//             h.put(i,h.getOrDefault(i,0)+1);
//         }
//         PriorityQueue<Pair> pq=new PriorityQueue<>((a,b)->(a.x==b.x)?(a.y<b.y)?-1:1:(a.x<b.x)?1:-1);
//         for(Map.Entry<Integer,Integer> entry:h.entrySet()){
//             Pair p=new Pair(entry.getValue(),entry.getKey());
//             pq.add(p);
//         }
//         int[] res=new int[k];
//         for(int i=0;i<k;i++){
//             res[i]=pq.remove().y;
//         }
//         return res;
//     }
// }