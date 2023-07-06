#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{0,1,0,1,1,0,1,0,1,1,0,1,0};
    int s = 0;
    int e = arr.size() - 1;
    int p = 0;
    while(s<=e){
        if(arr[p]==0){
            swap(arr[s],arr[p]);
            p++;
            s++;
        }
        if(arr[p]==1){
            swap(arr[e],arr[p]);
            e--;
        }
    }
    for(int p = 0;p<arr.size();p++){
        cout<<arr[p]<<" ";
    }
    return 0;
}