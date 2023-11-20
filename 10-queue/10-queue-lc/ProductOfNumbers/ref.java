// class ProductOfNumbers {
//     //Stack<Integer> st=new Stack<>();
//     ArrayList<Integer> al=new ArrayList<>();
//     public ProductOfNumbers() {
        
//     }
    
//     public void add(int num) {
//         if(num==0) al.clear();
//         else{
//             if(al.size()==0) al.add(num);
//             else al.add(al.get((al.size()-1))*num);
//         } 
//         //st.push(num);
//     }
    
//     public int getProduct(int k) {
//         //System.out.println(al);
//         if(k>al.size()) return 0;
//         else if(k==al.size()) return al.get(al.size()-1);
//         else {
//             int temp1=al.get(al.size()-1);
//             int temp2=al.get(al.size()-k-1);
//             return temp1/temp2;
//         }
//         // Stack<Integer> temp=new Stack<>();
//         // for(int i=0;i<k;i++){
//         //     temp.push(st.pop());
//         // }
//         // int product=1;
//         // while(temp.size()>0){
//         //     product*=temp.peek();
//         //     st.push(temp.pop());
//         // }
//         // return product;
//     }
// }

// /**
//  * Your ProductOfNumbers object will be instantiated and called as such:
//  * ProductOfNumbers obj = new ProductOfNumbers();
//  * obj.add(num);
//  * int param_2 = obj.getProduct(k);
//  */