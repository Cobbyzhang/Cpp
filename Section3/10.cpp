#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string a,b;
    cout << "please input a string" << endl;
    cin >> a;
    for(string::size_type index=0;index != a.size(); ++index)
    {
        if(!ispunct(a[index]))
        {
            b += a[index];
        }
    }
    cout << b << endl;
}

