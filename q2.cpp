#include<bits/stdc++.h>
using namespace std;  
#define MX 100  
class Employee{
    string name;
    long empNumber;
    public:
    void getData()
    {
        cout<<"Enter employee name:";
        // getline(cin,name);
        cin>>name;
        cout<<"Enter employee Number:";
        cin>>empNumber;
    }
    void putData()
    {
        cout<<"Employee name is :"<<name<<" "<<"\nEmployee number is :"<<empNumber<<endl;
    }
};
// void Employee::putData()
// {
//   cout<<"Employee name is :"<<name<<" "<<"Employee number is :"<<empNumber<<endl;
// }
int main(){
    Employee emply[MX];
    int n;
    cout<<"Enter the total employee:";
    cin>>n;
    if(n>MX)
    {
        cout<<"The employee number is invalided!\n";

    }
    else{
    for(int i=0;i<n;i++)
    {
        cout<<"The employee number is :"<<i+1<<endl;
        emply[i].getData();
    }
    for(int i=0;i<n;i++)
    {
        emply[i].putData();
    }}
    return 0;
}