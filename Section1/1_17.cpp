#include<iostream>

int main()
{
    int value,amount = 0;
    while(std::cin >> value)
    {
        if(value < 0)
        {
        ++amount;
        }
    }
    std::cout << "the amount of negative numbers is " << amount <<std::endl;
    return 0;
}
