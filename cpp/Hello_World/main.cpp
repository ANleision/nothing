#include <iostream>

void print(const char* message);//告诉编辑器引用另一个cpp文件中定义的哪一个函数，其中message可以不写
//void prin(const char* message);//一个未被定义的函数
int main() {
	std::cout << "Helloworld" << std::endl;
	//<< 可以理解为一个函数，具体意义是使用命名空间std中的cout函数，打印Helloworld，然后再使用endl函数进行换行
	//调用标准库的时候使用std，若调用非标准库如iostream.h则不需要使用
	//或者可以使用 using namespace std 来告诉编辑器要使用std空间中函数
	std::cin.get();//运行到此处时，程序会暂停一下，等输入回车后再运行下面的程序
	std::cout << "helloWorld" << std::endl;
	std::cin.get();
	print("heLLoWORld");//使用在function定义的函数
}
//这个时候如果右键项目名，点击生成，则所有文件会被链接器粘合在一起生成exe文件
//但如果仅右键编译其中一个源文件，即使没有在其他文件中定义函数，不会报错