#include<iostream>

int main()
{
    int v1,v2,temp;
    std::cout << "input 2 numbers:" << std::endl;
    std::cin >> v1 >> v2;
    if(v1 > v2)
    {
        temp = v1;
        v1 = v2;
        v2 = temp;
    }
    for(int i=v1; i<=v2; ++i)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
