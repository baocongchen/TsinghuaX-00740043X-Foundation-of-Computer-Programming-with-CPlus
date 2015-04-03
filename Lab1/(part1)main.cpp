/****************************************
题目描述
任意给定n个整数，求这n个整数序列的和、最小值、最大值

输入描述
输入一个整数n，代表接下来输入整数个数，n<=100,接着输入n个整数，整数用int表示即可。

输出描述
输出整数序列的和、最小值、最大值。用空格隔开，占一行

样例输入
2
1 2
样例输出
3 1 2
提交代码
******************************************/
#include <iostream>

using namespace std;

int main()
{
    long int total = 0;
    int inputs, input, maxValue, minValue;;
    cin >> inputs;
    if (inputs <= 100) {
        for (int i=0; i<inputs; i++) {
            cin >> input;
            if (i==0) {
                minValue = input;
                maxValue = input;
            } else {
                if (minValue >= input) {
                    minValue = input;
                } else {
                    if (maxValue < input) {
                        maxValue = input;
                    }
                }
                
            }
            
            total+=input;
        }
    cout << total << " " << minValue << " " << maxValue;
    }
    
    
   return 0;
}

