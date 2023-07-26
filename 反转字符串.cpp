#include <iostream>
#include <string>

class StringUtil
{
public:
    static std::string reverseString(const std::string &s)
    {
        std::string reversed = s;  // 创建输入字符串的副本
        size_t begin = 0;          // 用于从字符串的开头开始的索引
        size_t end = s.size() - 1; // 用于从字符串的末尾开始的索引

        // 交换从开头和末尾开始的字符，直到达到字符串的中间
        while (begin < end)
        {
            std::swap(reversed[begin], reversed[end]);
            ++begin;
            --end;
        }

        return reversed; // 返回反转后的字符串
    }
};

int main()
{
    std::string input;
    std::cout << "请输入要反转的字符串: ";
    std::getline(std::cin, input); // 从标准输入读取字符串

    std::string reversed = StringUtil::reverseString(input); // 调用静态函数进行字符串反转

    // 输出原始字符串和反转后的字符串
    std::cout << "原始字符串: " << input << std::endl;
    std::cout << "反转后的字符串: " << reversed << std::endl;

    return 0; // 程序结束
}
