
#include <iostream>
#include <iomanip>
using namespace std;
class Solution
{
public:
    void solve()
    {
        double initial_amount, interest_rate, final_amount;
        int years;

        cout << "Enter initial amount: ";
        cin >> initial_amount;
        cout << "Enter number of years: ";
        cin >> years;
        cout << "Enter interest rate (percent per year): ";
        cin >> interest_rate;

        interest_rate /= 100;

        final_amount = initial_amount;

        for (int i = 0; i < years; i++)
        {
            final_amount += final_amount * interest_rate;
        }
        cout << "At the end of " << years << " years, you will have " << final_amount << " dollars." << endl;
    }
};

int main()
{

    Solution sol;
    sol.solve();

    return 0;
}