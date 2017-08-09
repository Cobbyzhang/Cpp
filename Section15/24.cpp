#include <iostream>

using namespace std;

class Base {
public:
    virtual void text()=0;
    virtual int fcn(){cout << "using Base::fcn()" << endl; return 1;}
};

class D1 : public Base{
public:
    void text() { cout << " Using D1::text()" << endl;}
    int fcn(int a){cout << "using D1::fcn(int a)" << endl; return 2;}
    
};

class D2 : public D1{
public:
    int fcn(int a){ cout << "using D2::fcn(int a)" << endl; return 3;}
    int fcn(){ cout << "using D2::fcn()" << endl; return 4;}

};

class D3 : public D2{
public:
    void text() {cout << "Using D3::text()" << endl;}
};



int main(){
//    Base bobj;
    D1 d1obj;
    D2 d2obj;
//    Base *bp1 = &bobj, *bp2 = &d1obj, *bp3 = &d2obj;
//    bp1->fcn();
//   bp2->fcn();
//    bp2->fcn(1);
//    bp3->fcn();
//    bp3->fcn(1);
//    d1obj.fcn();
//    d1obj.fcn(1);
//    d2obj.fcn();
//    d2obj.fcn(1);
    D3 d3obj;
//    d3obj.fcn();
//    d3obj.fcn(1);
    d1obj.text();
    d2obj.text();
    d3obj.text();
    return 0;
}
