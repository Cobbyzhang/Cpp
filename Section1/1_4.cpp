# include<iostream>

int main()
{
    std::cout << "Please input 2 number:" << std::endl;
    int val1,val2;
    std::cin >> val1 >> val2;
    std::cout << "The product of " << val1 << " and " << val2 
              << " is " << val1 * val2 << std::endl;
    //std::cout << /* "*/"*/;
    std::cout << "/*";
    std::cout << "*/";
    return 0;
}
