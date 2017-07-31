#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    const int a_size = 6;
    double a[a_size]={1.1,2.2,3.3,4.1,2.3,5.4};
    double b = 1/3;
    vector<double> dvec(a,a+a_size);
    cout << b << endl << accumulate(dvec.begin(),dvec.end(),0) << endl;
}
