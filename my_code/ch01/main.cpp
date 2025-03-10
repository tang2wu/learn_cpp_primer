#include <iostream>

int main()
{
    // 统计连续出现的数字的次数
    int curVal = 0;
    if (std::cin >> curVal) {
        int count = 1;
        int val = 0;
        while (std::cin >> val) {
            if (curVal == val) {
                count++;
            } else {
                std::cout << "val:" << curVal << ", count:" << count << std::endl;
                count = 1;
                curVal = val;
            }
        }
        if (count > 1) {
            std::cout << "val:" << curVal << ", count:" << count << std::endl;
        }
    } else {
        std::cout << "you do not enter anything" << std::endl;
    }
    return 0;
}