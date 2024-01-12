#include <iostream>

using namespace std;
void print(const char* message) {
	cout << message << endl;
#include "end_of_file.h"//在CPP中，没有文件的概念，文件只是给编译器提供源码的一种形式
	//#include 的作用就是遍历头文件的内容并复制粘贴到对应位置