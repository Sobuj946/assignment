#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    float c;
    float f;
    void faren_to_cel()
    {
        cout << " Farenheight to celcious :" << setprecision(10) << ((f - 32) * 5.0 / 9) << endl;
    }
    void celcious_to_F()
    {
        cout << " celcious to Farenheight to:" << setprecision(10) << (c / 5) * 9 + 32 << endl;
    }
};
int main()
{

    Solution sol;
    int n;
    cout << "Enter two option 1 & 2:" << endl;
    cout << "Press 1 for converting f to c:" << endl;
    cout << "Press 2 for converting c to f:" << endl;

    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Enter farenheigh:";
        cin >> sol.f;
        sol.faren_to_cel();
        break;

    case 2:
        cout << "Enter celcious:";
        cin >> sol.c;
        sol.celcious_to_F();
        break;
    }

    return 0;
}