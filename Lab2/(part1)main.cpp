/***********************************************************
题目描述

输入一个三角形的3边长度，判断该三角形是否为直角三角形，若是则输出True，若不是则输出False。推荐做法：定义一个函数，接受三个int参数，返回bool，再用主函数调用之。


输入描述

每行输入三个由空格隔开的整数a, b, c，表示三角形的3条边长

1 <= a, b, c <= 10000
输出描述

对于每一行输入，输出True或者False表明是否为直角三角形
样例输入

3 4 5
6 7 8
1 1 1


样例输出

True
False
False
*************************************************************/


#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	if ((a <= 10000) && (1 <= a) && (b <= 10000) && (1 <= b) && (1 <= c) && (c <= 10000)) {
		if ((a*a + b*b) == c*c) {
			cout << "True" << endl;
		}
		else if ((a*a + c*c) == b*b) {
			cout << "True" << endl;
		}
		else if ((b*b + c*c) == a*a) {
			cout << "True" << endl;
		}
		else {
			cout << "False" << endl;
		}

	}
	else {
		cout << "False" << endl;
	}

	return 0;

}



