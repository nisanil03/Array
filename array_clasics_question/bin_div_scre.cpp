#include <bits/stdc++.h>
using namespace std;
int solved(int dividend, int divisor)
{
    int s = 0;
    int e = abs(dividend);
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        // perfect solution
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        // not perfect solution
        if (abs(mid * divisor) > abs(dividend))
        {
            // left search
            e = mid - 1;
        }
        else
        {
            // answer store
            // right search
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
        return ans;
    else
    {
        return -ans;
    }
}
int main()
{

    int dividend = -21;
    int divisor = -7;
    int ans = solved(dividend, divisor);
    cout << "Ans is " << ans << endl;

    return 0;
}