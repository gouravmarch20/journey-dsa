#include <iostream>
#include <vector>   
using namespace std;
class Solution {
public:
bool checkBloom(vector <int> & nums , int day ,int m , int noOfAdj){
  int noOfBloom = 0;
  int cnt = 0;
  for(int i = 0 ; i < nums.size() ; i++){
    // if(nums[i] / day <= 1 ){
 if (nums[i] <= day) {
      cnt++;
    }else{
      noOfBloom += (cnt/noOfAdj);
      cnt = 0;
    }
  }
  //!m2::: ending last cnt-  Add remaining flowers as a bouquet
        noOfBloom += (cnt / noOfAdj); 
        return noOfBloom >= m; 
}
int roseGarden(int n,vector<int> nums, int k, int m) {

    int low = *min_element(nums.begin() , nums.end());
    int high = *max_element(nums.begin() , nums.end());
    // 
    if((m * k) > n) return -1; 
    for(int i = low ; i <= high ; i++){
      if(checkBloom(nums , i ,k , m)){
        return i;
      }
    }
    return -1;

  }
};