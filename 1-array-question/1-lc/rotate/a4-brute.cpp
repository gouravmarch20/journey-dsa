 void rotateArr(int arr[], int d, int n){
        // code here
          while(d--){
            int temp = arr[0];
            //^ each ko shift by one 
            for(int i = 1; i<n; i++){
                arr[i-1] = arr[i];
            }
            arr[n-1] = temp;
        }