#include <bits/stdc++.h>
using namespace std;

class calculation
{
public:
    int add(int num1, int num2)
    {
        int res = num1 + num2;
        return res;
    }

    int sub(int num1, int num2)
    {
        int res = num1 - num2;
        return res;
    }
    int mul(int num1, int num2)
    {
        int res = num1 * num2;
        return res;
    }
    int div(int num1, int num2)
    {
        int res = num1 / num2;
        return res;
    }
};
int main()
{
    int a, b;
    char ch;
    cin >> a >> ch >> b;
    calculation cal;
    switch (ch)
    {
    case '+':
        cout << cal.add(a, b) << endl;
        break;
    case '-':
        cout << cal.mul(a, b) << endl;
        break;

    case '*':
        cout << cal.sub(a, b) << endl;
        break;
    default:
        cout << cal.div(a, b) << endl;

        break;
    }

    return 0;
}