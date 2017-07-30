#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a=10, b =3;
    int power(int a,int b);
    cout << a << "^" << b << " = " << power(a,b);
}

int power(int a,int b){
    return pow(a,b);
}


