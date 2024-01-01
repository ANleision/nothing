#include <iostream>

//void print(const char* message);//告诉编辑器引用另一个cpp文件中定义的哪一个函数，其中message可以不写
////void prin(const char* message);//一个未被定义的函数
//int main() { 
//	std::cout << "Helloworld" << std::endl;//<<是流运算符，用于重载（没搞懂）
//	//<< 可以理解为一个函数，具体意义是使用命名空间std中的cout函数，打印Helloworld，然后再使用endl函数进行换行
//	//调用标准库的时候使用std，若调用非标准库如iostream.h则不需要使用
//	//或者可以使用 using namespace std 来告诉编辑器要使用std空间中函数
//	std::cin.get();//运行到此处时，程序会暂停一下，等输入回车后再运行下面的程序
//	std::cout << "helloWorld" << std::endl;
//	std::cin.get();
//	print("heLLoWORld");//使用在function定义的函数
//}
////这个时候如果右键项目名，点击生成，则所有文件会被链接器粘合在一起生成exe文件
////但如果仅右键编译其中一个源文件，即使没有在其他文件中定义函数，不会报错

//int main() {
//	int value = 8;
//	// int 可存储约-20亿到20亿的数值,一个int大小为4字节，有32个比特位，其中1个比特位为预留位，用于标识正负，所以实际上int可以表示±2^31
//	//如果不想要负数，可以使用无符号数unsiged int，这样就可以表示0~2^32次方的正数数字
//	std::cout << value << std::endl;
//	std::cin.get();
//	value = 10;
//	std::cout << value << std::endl;
//	std::cin.get();
//}

//int main() {
//	std::cout << sizeof(int) << std::endl;
//	std::cout << sizeof(short) << std::endl;
//	std::cout << sizeof(char) << std::endl;
//	std::cout << sizeof(long long int) << std::endl;
//	std::cout << sizeof(bool) << std::endl;
//	std::cout << sizeof(float) << std::endl;
//	std::cout << sizeof(double) << std::endl;
//}
//int main() {
//	char a = 'A';//本质上还是数字
//	std::cout << a << std::endl;
//	std::cin.get();
//	a = 65;//ASCII码值65对应的字符为A
//	std::cout << a << std::endl;//之所以打印A是因为a的类型为char，当char传入cout时会认为a是一个字符而不是数字
//	std::cin.get();
//	short b = 65;
//	std::cout << b << std::endl;
//	std::cin.get();
//}

//int main() {
//	//float value = 5.5;//如果悬停在5.5上，实际上会发现其类型为双精度类型double
//	float value = 5.5f;//如果需要定义一个单精度类型float，在后面加上f，声明定义的是float类型
//	std::cout << value << std::endl;
//	std::cin.get();
//}

int main(){
	bool value = 2;//bool值为真则返回1，为假返回0
	std::cout << value << std::endl;
}