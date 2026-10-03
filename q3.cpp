#include <bits/stdc++.h>
#include <iostream>
#define MX 100
using namespace std;
class Distance
{
    float inch;
    int feet;

public:
    Distance() : feet(0), inch(0.0) {}
    void getData()
    {
        cout << "Enter feet:";
        cin >> feet;
        cout << "Enter inches:";
        cin >> inch;
    }
    void showData()
    {
        cout << "The feet is:" << feet << endl;
        cout << "The inches is: " << inch << endl;
    }
    void add_dist(Distance d1, Distance d2)
    {
        feet = d1.feet + d2.feet;
        inch = d1.inch + d2.inch;
        while (inch > 12.0)
        {
            inch -= 12.0;
            feet++;
        }
    }
    void div_dist(Distance d2, int divisor);
};
void Distance::div_dist(Distance d2, int divisor)
{
    float fltfeet = d2.feet + d2.inch / 12.0;
    fltfeet /= divisor;
    feet = int(fltfeet);
    inch = (fltfeet - feet) * 12.0;
}
int main()
{
    Distance distance[MX];
    int n;
    cout << "Enter the distance Max(100):";
    cin >> n;
    if (n >= MX)
    {
        cout << "The distance is not valid!\n";
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Enter distances:" << i + 1 << endl;
        distance[i].getData();
    }
    Distance total;
    for (int i = 0; i < n; i++)
    {
        Distance temp = total;
        total.add_dist(temp, distance[i]);
    }
    Distance average;
    average.div_dist(total, n);
    cout << "\nTotal Distance: ";
    total.showData();
    cout << "Average Distance: ";
    average.showData();
    return 0;
}