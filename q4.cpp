#include <bits/stdc++.h>
using namespace std;
#define mx 1000
class Array
{
    int arr[mx];

public:
    void getData(int n)
    {
        cout << "Enter the array element:";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    int maxint(int n)
    {
        int Mx = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (Mx < arr[i])
            {
                Mx=arr[i];
                return i + 1;
                break;
            }
                
        }
    }
};

int main()
{
    Array a;
    int n;
    cout << "Enter the element of the array:";
    cin >> n;
    a.getData(n);
    int indx = a.maxint(n);
    cout << "The max element of the array index is : " << indx << endl;
    return 0;
}