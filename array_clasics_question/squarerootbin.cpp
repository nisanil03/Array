#include <bits/stdc++.h>
using namespace std;
int findsqrt(int n, int)
{
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (mid * mid > target)
    }
}

int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    int ans = findsqrt();
    cout << "Ans is " << ans << endl;
    return 0;
}