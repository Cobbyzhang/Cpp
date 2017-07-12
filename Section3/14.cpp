#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

int main()
{
    string a;
    vector<string> vec;
    cout << "Please input an article;" << endl;
    while(cin >> a){
        vec.push_back(a);
    }
   int ou = 0; 
   for(vector<string>::size_type idv=0; idv != vec.size(); ++idv){
        for(string::size_type ids=0; ids!=vec[idv].size(); ++ids){
            vec[idv][ids] = toupper(vec[idv][ids]);
        }
        cout << vec[idv] << ' ';
        ++ou;
        if(ou%8==0){
            cout << endl;
        }
    }
}
