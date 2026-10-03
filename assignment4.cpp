#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void solve()
    {   char ch;
        float a,b;
       cout<<"Enter first number ,operator,second number:";
        cin>>a>>ch>>b;
        switch (ch)
        {
          cout<<fixed<<setprecision(5);
        case '+':
            cout<<"Answer:"<<a+b;
            break;
          case '-':
            cout<<"Answer:"<<a-b;
            break;
              case '*':
            cout<<"Answer:"<<a*b;
            break;
              case '/':
            cout<<"Answer:"<<a/b;
            break;
        
        }
        
    }
};
int main()
{

    Solution sol;
    sol.solve();
    return 0;
}