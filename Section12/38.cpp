#include <iostream>
#include <string>

using namespace std;


class Foo
{
    int fi;
public:
    Foo(int fii): fi(fii){}
    int getFoo() {return fi;}
    
};

class Bar
{
    static int bi;
    static Foo ff;
public:
    Bar(){}
    static int callsFooVal;
    static int FooVal();

};
int Bar::bi = 20;
int Bar::callsFooVal = 0;
Foo Bar::ff = Foo(0);
int Bar::FooVal()
{
    callsFooVal += 1; 
    return ff.getFoo();
}



int main()
{
	int test_num = 123;
	Foo foo(123);
    
    cout << foo.getFoo() << endl 
         << Bar::callsFooVal << endl
         << Bar::FooVal() << endl 
         << Bar::callsFooVal << endl
         << Bar::FooVal() << endl 
         << Bar::callsFooVal << endl;
    return 0;
}
