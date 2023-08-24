// class Solution {
//     public int addMinimum(String word) {
//         // int[] freq=new int[3];
//         // for(int i=0;i<word.length();i++){
//         //     char ch=word.charAt(i);
//         //     freq[ch-'a']++;
//         // }
//         // int max=0;
//         // for(int i=0;i<3;i++){
//         //     if(freq[i]>max) max=freq[i];
//         // }
//         // int sum=0;
//         // for(int i=0;i<3;i++){
//         //     sum+=(max-freq[i]);
//         // }
//         // return sum;
//         int sum=0;
//         int n=word.length();
//         for(int i=0;i<n;i++){
//             char ch=word.charAt(i);
//             if(ch=='a'){
//                 if(i+1==n || word.charAt(i+1)=='a'){
//                     sum+=2;
//                 }
//                 else if(word.charAt(i+1)=='c'){
//                     sum+=1;
//                     i++;
//                 }
//                 else{
//                     continue;
//                 }
//             }
//             else if(ch=='b'){
//                 if(i-1==-1 || word.charAt(i-1)!='a'){
//                     sum+=1;
//                 }
//                 if(i+1==n || word.charAt(i+1)!='c'){
//                     sum+=1;
//                 }
//                 else{
//                     i++;
//                     continue;
//                 }
//             }
//             else{
//                 if(i-1==-1 || word.charAt(i-1)!='b'){
//                     sum+=2;
//                 }
//             }
//         }
//         return sum;
//     }
// }