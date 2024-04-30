#include <bits/stdc++.h>
using namespace std;
bool binarysearch(int arr[][4], int rows, int col, int target)
{
    int s = 0;
    int e = rows * col - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int rowIndex = mid / col;
        int colIndex = mid % col;

        if (arr[rowIndex][colIndex] == target)
        {
            cout << "found at" << rowIndex << "  " << colIndex << endl;
            return true;
        }
        if (arr[rowIndex][colIndex] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}

int main()
{
    int arr[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int rows = 5;
    int col = 4;

    int target = 19;

    bool ans = binarysearch(arr, rows, col, target);
    if (ans)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}