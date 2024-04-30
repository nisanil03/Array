#include <bits/stdc++.h>
using namespace std;
int findsqrt(int n)
{
    int traget = n;
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid == traget)
        {
            return mid;
        }
        else if (mid * mid > traget)        {
            // left search
            e = mid - 1;
        }
        else
        {
            // ans store
            ans = mid;
            // right search
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int ans = findsqrt(n);
    cout << "Ans is "
         << " " << ans << endl;
    int precision;
    cout << "Enter the precision number" << endl;
    cin >> precision;
    double step = 0.1;
    double finalans = ans;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalans; j * j <= n; j = j + step)
        {
            finalans = j; 
        }
        step = step / 10;
    }
    cout << "floating point ans"
         << " " << finalans << endl;
    return 0;
}