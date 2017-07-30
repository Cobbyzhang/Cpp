#include<iostream>
#include<stdlib.h>
using namespace std;

int main(int argc, char **argv)
{
    if(argc != 3){
        cout << "Please input 2 int variables!" << endl;
        return 0;
    }
    cout << atof(argv[1])+atof(argv[2])<< endl;
    return 0;
}

