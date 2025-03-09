#include <iostream>

int main () {
    
    std::cout << "We will get sum from a to b:" << std::endl;
    int a, b = 0;
    std::cin >> a >> b;
    std::cout << "a:" << a << ", b:" << b << std::endl;
    // useed to store the sum of the addends
    int sum = 0;
    while ( a <= b )
    {
        sum += a;
        a++; 
    }
    std::cout << "the sum of a " << a << " and " << " b:" << b << " is " << sum << std::endl;

    
    
    return 0;
}