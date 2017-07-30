#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<string> svec(10);
    vector<string> *pvec1 = &svec;
    delete pvec1;
    return 0;
}
