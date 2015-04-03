/*******************************
题目描述
已知一个只包含0和1的二进制数，长度不大于10，将其转换为十进制并输出。

输入描述
输入一个二进制整数n，其长度不大于10

输出描述
输出转换后的十进制数，占一行

样例输入
110

样例输出
6

提交代码
********************************/
#include <iostream>

using namespace std;

int main()
{
    int num;
    int decimal = 0, base = 1;
    cin >> num;
    while (num > 0) {
        int checkIfOne = num%10;
        if (checkIfOne == 1) {
            decimal += base;
        }
        base *= 2;
        num = num / 10;
    }
    cout << decimal << endl;
   
    return 0;
}

