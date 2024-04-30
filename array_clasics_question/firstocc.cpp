#include <bits/stdc++.h>
using namespace std;

int firstoccerence(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // ans store and than left search
            ans = mid;
            e = mid - 1;
        }
        else if (target > arr[mid])
        {
            // right mai scarch karna hai
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            // left mai scarch karna hai
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v{1, 3, 3, 3, 3, 3, 4, 4, 4, 4, 6, 7};
    int arr[] = {1, 3, 3, 3, 3, 4, 4, 4, 4, 4, 6, 7};
    int size = 12;

    int target = 3;
    int indexofocc = firstoccerence(v, target);

    cout << "ans is"
         << " " << indexofocc << endl;
    auto ans2 = lower_bound(v.begin(), v.end(), target);
    cout << "ans2 is " << ans2 - v.begin() << endl;
    return 0;
}