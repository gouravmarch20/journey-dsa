#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    int arr[] = {2, 4, 1, 3, 3};
    int sizea = 5;
    int brr[] = {4, 3 , 3};
    int sizeb = 3;
    vector<int>ans;
    for(int i = 0;i<sizea;i++){
        for(int j = 0;j<sizeb;j++){
            if(arr[i] == brr[j]){ // If element is in both arrays, push in ans array
                brr[j] = INT_MIN; // to handle the duplicate case
                ans.push_back(arr[i]);
            }
        }
    }
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}