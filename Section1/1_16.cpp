#include<iostream>

int main()
{
    int v1,v2;
    std::cout << "please input 2 numbers" << std::endl;
    std::cin >> v1 >> v2;
    int b = 0;
    if(v1 >= v2)
    {
        b = v1;
    }
    else
    {
        b = v2;
    }
    std::cout << "the bigger one between " << v1 << " and " << v2 << " is " << b <<std::endl;
}

