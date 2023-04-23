#include <bits/stdc++.h>
using namespace std;

int max_water(vector<int> &heights)
{
    int left = 0, right = heights.size() - 1;
    int max_water = 0, left_max = 0, right_max = 0;

    while (left < right)
    {
        if (heights[left] < heights[right])
        {
            left_max = max(left_max, heights[left]);
            max_water += left_max - heights[left];
            left++;
        }
        else
        {
            right_max = max(right_max, heights[right]);
            max_water += right_max - heights[right];
            right--;
        }
    }
    return max_water;
}

int main()
{
    vector<int> heights = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Maximum amount of water that can be trapped: " << max_water(heights) << endl;
    return 0;
}
