#include<iostream>
int main()
{
    int sum1=0;
    int sum2=0;
    for(int i=50; i!=100; ++i)
    {
        sum1 += i;
    }
    std::cout << "the sum of numbers from 50 to 100 is" << sum1 <<std::endl;
    int i = 50;
    while(i!=100)
    {
        sum2 += i;
        ++i;
    }
    std::cout << "the sum of numbers from 50 to 100 is" << sum2 <<std::endl;
    return 0;
}
