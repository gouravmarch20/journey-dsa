#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int findMinDifference(vector<string> &timePoints)
{
    vector<int> minutes;
    int minTime = INT_MAX;
    for (int i = 0; i < timePoints.size(); i++)
    {
        int hrs = stoi(timePoints[i].substr(0, 2));
        int min = stoi(timePoints[i].substr(3, 2));
        int totalMinutes = hrs * 60 + min;
        minutes.push_back(totalMinutes);
    }
    // step2 >> for compare min diff in each O(n2) reduce to  >> O(nlogn) + O(n)
    sort(minutes.begin(), minutes.end());

    int n = minutes.size();

    // step3 >> min difference
    for (int i = 0; i < n - 1; i++)
    {
        int diff = minutes[i + 1] - minutes[i];
        minTime = min(minTime, diff);
    }
    // step4 : last , first difference
    int lastDiff = minutes[0] + 1440 - minutes[n - 1];
    if (lastDiff < minTime)
    {
        minTime = lastDiff;
    }

    return minTime;
}
int main()
{
    // vector<string> timePoints{"18:59", "23:59", "00:00", "04:00", "09:35"};//^ allready sorted
    // vector<string> timePoints{  "00:00","23:59" ,"18:59", "09:35","04:00"};//^ random time
    // vector<string> timePoints{"00:00", "23:59", "00:00"}; //^ same  time of rotate case
    // vector<string> timePoints{"00:00", "23:59", "00:00"}; //^ same  time of rotate case
    vector<string> timePoints{"13:00", "13:10"}; //& edge case => not always step4 is the min time difference ==> 

    int res = findMinDifference(timePoints);
    cout << res << endl;
    return 0;
}