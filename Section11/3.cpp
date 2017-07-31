#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> ivec(12,23);
    for(vector<int>::iterator v_iter=ivec.begin();v_iter!=ivec.end();++v_iter)
    {
        cout << *v_iter << endl;
    }
    cout << accumulate(ivec.begin(),ivec.end(),0) << endl;
}
