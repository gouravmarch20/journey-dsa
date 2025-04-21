class Solution {
    JobScheduling(Jobs) {
        //your code goes here
        Jobs.sort((a , b) => b[2] - a[2]);
        const n = Jobs.length ;
        const hash = Array(n).fill(-1);
        let maxiP = 0;
                let cnt = 0;


        for(let i = 0 ; i < n ; i++){
          for (let j = Jobs[i][1] - 1; j >= 0; j--) {
            if(hash[j] === -1){
               cnt++;
              maxiP += Jobs[j][2];
              hash[j] = Jobs[j][0];
                break;

            }

          }
        }
        return [cnt,maxiP];

    }
}