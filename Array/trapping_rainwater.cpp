#include <iostream>
using namespace std;

// For T.C - O(n) and S.C - O(n)

int Total_water(int heights[], int n)
{
    int left_max[1000], right_max[1000];
    left_max[0] = 0;
    for (int i = 1; i < n; i++)
    {
        left_max[i] = max(left_max[i - 1], heights[i - 1]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << left_max[i] << " " << endl;
    // }
    right_max[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        right_max[i] = max(right_max[i + 1], heights[i + 1]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << right_max[i];
    // }
    int ans = 0,Mini_height=0;
    for (int i = 0; i < n; i++)
    {
        Mini_height = min(left_max[i], right_max[i]);
        if (Mini_height - heights[i] >= 0)
            ans = ans + Mini_height - heights[i];
    }
    return ans;
}

int main()
{
    int heights[1000], n;
    cout << "Enter number of buildings: ";
    cin >> n;
    cout << "Enter heights of the buildings:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    cout << "Maximum rain water that can be trapped is " << Total_water(heights, n) << " units.";

    return 0;
}
