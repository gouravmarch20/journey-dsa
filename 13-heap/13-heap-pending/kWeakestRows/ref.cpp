// class Pair{
// 	int x;
// 	int y;
// 	Pair(int x,int y){
// 		this.x=x;
// 		this.y=y;
// 	}
// }
// class Solution {
//     public int[] kWeakestRows(int[][] mat, int k) {
//         int n=mat.length;
// 		int m=mat[0].length;
// 		int[] temp=new int[n];
// 		for(int i=0;i<n;i++){
// 			int  count=0;
// 			for(int j=0;j<m;j++){
// 				count+=(mat[i][j]==1)?1:0;
// 			}
// 			temp[i]=count;
// 		}
// 		// PriorityQueue<Pair> pq=new PriorityQueue<>((a,b)-> (a.x==b.x)?(a.y<b.y)?-1:1:(a.x<b.x)?-1:1);
// 		// for(int i=0;i<temp.length;i++){
// 		// 	Pair p=new Pair(temp[i],i);
// 		// 	pq.add(p);
// 		// }
// 		// int[] res=new int[k];
// 		// for(int i=0;i<k;i++){
// 		// 	res[i]=pq.remove().y;
// 		// }
		
// 		PriorityQueue<Pair> pq=new PriorityQueue<>((a,b)->(a.x==b.x)?(a.y<b.y)?1:-1:(a.x<b.x)?1:-1);
// 		for(int i=0;i<k;i++){
// 			Pair p=new Pair(temp[i],i);
// 			pq.add(p);
// 		}
// 		//System.out.println(pq.peek().x+" " +pq.peek().y);
// 		for(int i=k;i<n;i++){
// 			if(temp[i]<pq.peek().x){
// 				pq.remove();
// 				Pair p=new Pair(temp[i],i);
// 				pq.add(p);
// 			}
// 		}
// 		//System.out.println(pq.size());
// 		int[] res=new int[pq.size()];
// 		int i=pq.size()-1;
// 		while(pq.size()!=0){
// 			res[i]=pq.remove().y;
// 			i--;
// 		}
// 		return res;

//     }
// }