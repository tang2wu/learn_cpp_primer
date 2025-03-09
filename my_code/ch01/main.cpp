#include <iostream>

int main () {
    std::cout << "Hello Makefile World";
    std::cout << "enter two number(int type):";
    int value0, value1 = 0;
    std::cin >> value0 >> value1;
    std::cout << "value0:" << value0 << ", value1:" << value1 ; 
    int sum = value0 + value1;
    std::cout << "sum of the two number is " << sum ;
    std::cout << "The product of " << value0 << " and " << value1 << " is " << value0 * value1;
    std::cout << std::endl;
    /* 正常注释*/
    // an error when return value is not 0

    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */ ";
    std::cout << /* "*/" /* "/*" */;

    return 0;
}