#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a=0;
    vector<int> ivec;
    cout << "Input some int" << endl;
    while(cin >> a)
    {
        ivec.push_back(a);
    }
    int *pa = new int[ivec.size()], *pp =pa;
    for(vector<int>::iterator iter=ivec.begin(); iter!= ivec.end();++iter){
        *pp = *iter;
        cout << *pp++ << ' ';
    }
    cout << endl;
    delete [] pa;
}
