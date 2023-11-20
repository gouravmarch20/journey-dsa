// class Solution {
//     public int[] deckRevealedIncreasing(int[] deck) {
//         int n=deck.length;
//         if(n<=2) {
//              Arrays.sort(deck);
//              return deck;
//         }
//         Arrays.sort(deck);
//         Deque<Integer> dq=new ArrayDeque<>();
//         dq.add(deck[n-1]);
//         for(int i=n-2;i>=0;i--){
//             dq.addFirst(dq.removeLast());
//             dq.addFirst(deck[i]);
//         }
//         int[] res=new int[n];
//         for(int i=0;i<n;i++){
//             res[i]=dq.removeFirst();
//         }
//         return res;
//     }
// }