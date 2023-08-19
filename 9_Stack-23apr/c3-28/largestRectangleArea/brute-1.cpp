#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>
#include <deque>

using namespace std;

int largestRectangleArea(vector<int> &heights)
{
    int maxArea = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        int currArea = heights[i];//M forgot to include add currArea
        for (int j = i - 1; j >= 0; j--)
        {
            if (heights[i] <= heights[j])
            {
                currArea += heights[i];
            }
            else
            {
                break;
            }
        }
        for (int j = i + 1; j < heights.size(); j++)
        {
            if (heights[i] <= heights[j])
            {
                currArea += heights[i];
            }
            else
            {
                break;
            }
        }
        maxArea = max(currArea, maxArea);
    }

    return maxArea;
}
int main()
{
    vector<int> heights = {2 , 4};
    largestRectangleArea(heights);

    return 0;
}
