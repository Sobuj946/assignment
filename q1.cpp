#include<bits/stdc++.h>
using namespace std;
class Reverse{
    string s;
    public:
    void setData()
    {
        getline(cin,s);
    }
    void reversit(void);
    void display();
};
void Reverse::reversit()
{
    int n=s.size()-1;
    for(int i=0;i<n/2;i++)
    {
        swap(s[i],s[n-i]);
       
    }
    
}
void Reverse:: display()
{
    cout<<s<<endl;
}
int main(){

  Reverse s;
  s.setData();
  s.reversit();
  s.display();
 

    return 0;
}