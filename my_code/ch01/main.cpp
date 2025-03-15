#include <iostream>

int main()
{
    // 统计连续出现的数字的次数
    std::cout << "You can enter number(ctrl + D finish):" << std::endl;
    // first time cin
    int current_num = 0;
    if (std::cin >> current_num) {
        int count = 1;
        int next_num = 0;
        while (std::cin >> next_num) {
            if (current_num == next_num) {
                count++;
            } else {
                std::cout << "The num:" << current_num << ", count is:" << count << std::endl;
                count = 1;
                current_num = next_num;
            }
        }
        // print last num
        std::cout << "The num:" << current_num << ", count is:" << count << std::endl;
        
    } else {
        std::cout << "you enter nothing , pls check." << std::endl;
    }
    return 0;
}