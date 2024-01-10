// 任何以#开头的东西称为预处理器命令/指令，在实际编译这个文件之前会首先被编译
// 这个的含义就是只包括头文件一次，即防止头文件多次被包含
	// 比如如果一个头文件包含了这个头文件，而那个头文件也在同一个源文件中被引用，则会出现包含两次的情况
#pragma once

// 如果在源文件定义一个函数，当另外一个源文件需要使用这个函数的时候，需要声明（否则编译器无法得知函数的存在），如：
	// void [函数名]([函数参数]);（也可以把这个叫做“函数签名”）
// 但如果将这个文件定义在头文件，则只需要引入头文件件就可以使用这个头文件含有的所有函数
void Log(const char* message);
