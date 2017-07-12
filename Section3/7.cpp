#include<iostream>
#include<string>
using namespace std;


int main()
{
    string a,b;
    cout << "input two string to compare" << endl;
    cin >> a >> b;
    if(a == b)
    {
        cout << "They are equal" << endl;
    }
    else if(a<b)
    { 
        cout << b << endl;   
    }
    else
    {
        cout << a << endl;
    }

    if(a.size() == b.size())
    {
        cout << "Their siezes are equal" << endl;
    }
    else if(a.size() < b.size())
    { 
        cout << b << endl;   
    }
    else
    {
        cout << a << endl;
    }

}
