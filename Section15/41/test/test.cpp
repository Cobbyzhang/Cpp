#include <iostream>
#include <string>
using namespace std;
class A{
public:
    A(): i(10),s("a") { }
    A(const A& A1) :s(A1.s),i(A1.i) { }
    void show() {cout << s << " " << i << endl;}
private:
    A(const string ss): s(ss),i(0) {  }
    string s;
    int i;
};

int main(){
    A A1 = string("woca");
    A1.show();
    return 0;
}

