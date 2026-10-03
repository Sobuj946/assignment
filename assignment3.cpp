#include <iostream>
#include <conio.h> // For getche()
using namespace std;
class Solution
{
    public:
    void solve()
    {
        long digit=0;
        int count=0;
        char ch;
        cout<<"Enter six digit :";
        while(count<6)
        {
            ch=getche();
            if(ch=='\r')break;
            if(ch>='0'&&ch<='9')
            {
                digit=digit*10+(ch-'0');
            }
            else cout<<"invalid enter number\n";
            count++;
        }
        cout<<endl;
        cout<<digit<<endl;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}
