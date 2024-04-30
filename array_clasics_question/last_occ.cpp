#include <bits/stdc++.h>
using namespace std;

int lastocc(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // ans store
            ans = mid;
            // right search
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            // left search
            e = mid - 1;
        }
        else if (target > arr[mid])
        {
            // right search
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v{1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    int target = 3;
    int ans = lastocc(v, target);
    cout << " last occurence is at"<<" " << ans << endl;
    return 0;
}