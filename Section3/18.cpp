#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout << "Please input 10 numbers!" << endl;
    int a;
    vector<int> ivec;
    for(int i=0;i!=10;++i){
        cin >> a;
        ivec.push_back(a);
    }
    for(vector<int>::iterator iter = ivec.begin(); iter!=ivec.end();++iter){
        *iter = *iter * 2;
        cout << *iter << ' ';
    }
    cout << endl;
    
}
