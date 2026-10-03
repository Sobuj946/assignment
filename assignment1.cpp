#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void solve()
    {
        int n;
        cout << "Enter number:";
        cin >> n;

        for (int i = 1; i < 31; i++)
        {
            cout << n * i << " ";
            if (i % 10 == 0)
            {
                cout << endl;
            }
        }
    }
};
int main()
{

    Solution sol;
    sol.solve();
    return 0;
}