// void segregateElements(int arr[], int n)
// {
//     // Create an empty array to store result
//     int temp[n];

//     // Traversal array and store +ve element in
//     // temp array
//     int j = 0; // index of temp
//     for (int i = 0; i < n ; i++)
//         if (arr[i] >= 0 )
//             temp[j++] = arr[i];
 
//     // If array contains all positive or all negative.
//     if (j == n || j == 0)
//         return;
 
//     // Store -ve element in temp array
//     for (int i = 0 ; i < n ; i++)
//         if (arr[i] < 0)
//             temp[j++] = arr[i];
 
//     // Copy contents of temp[] to arr[]
//     memcpy(arr, temp, sizeof(temp));//* copy array till given size
// }

//? self
//     void segregateElements(int arr[],int n)
//     {
//         // Your code goes here
//// !          vector<int> ans(n , 0 );// prefill array then pushback not work 
//          vector<int> ans;
//         for(int i = 0 ; i < n ; i++){
//             if(arr[i] >= 0){
//                 ans.push_back(arr[i]);
//             }
//         }
//         for(int i = 0 ; i < n ; i++){
//             if(arr[i] < 0){
//                 ans.push_back(arr[i]);
//             }
//         }

//         for(int i = 0 ; i < n ; i++){
//           arr[i] = ans[i];
//         }
        
//     }
// };