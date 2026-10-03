#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long solve(int n)
    {
        if (n == 0 || n == 1 || n < 0)
            return 1;
        else if (n > 1)
            return n * solve(n - 1);
    }
};
int main()
{

    Solution sol;
    int n;
    cout << "Enter the number:";
    cin >> n;
    long long ans = sol.solve(n);
    cout << ans << endl;
    return 0;
}