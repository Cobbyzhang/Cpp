#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    int a = 0;
    cout << "Please input some int" << endl;
    while(cin >> a)
    {
        vec.push_back(a);
    }
    if(vec.size() % 2){
        cout << "The number of input is an odd, so the last one does not caculate." << endl;
    }
    for(vector<int>::size_type index=0; index <= vec.size()/2-1; ++index){
        cout << vec[2*index]+vec[2*index+1] << ' ';
    }
    cout << endl;
  
    for(vector<int>::size_type index=0; index <= vec.size()/2-1; ++index){
        cout << vec[index] + vec[vec.size()-index] << ' ';
    }
    cout << endl;
}
