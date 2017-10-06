// ConsoleApplication314.cpp: 定义控制台应用程序的入口点。
//3.14.cpp内联函数应用举例

#include "stdafx.h"
#include<iostream>
using namespace std;

const double PI = 3.14159265358979;

//内联函数，根据圆的半径计算其面积
inline double area(double r) {
	return PI*r*r;
}

int main()
{
	double r = 3.0;
	double s = area(r);
	cout << s << endl;
	return 0;
}

