#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void solve()
    {
        int n;
        cout << "Enter number of high:";
        cin >> n;
        if (n > 20)
            return;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "X";
            }

            cout << endl;
        }
    }
};
int main()
{

    Solution sol;
    sol.solve();
    return 0;
}