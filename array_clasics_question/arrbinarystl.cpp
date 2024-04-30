#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    if (binary_search(arr, arr + size, 3))
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}