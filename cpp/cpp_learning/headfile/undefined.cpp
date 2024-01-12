#include <iostream>

void Log(const char* message) 
{
	std::cout << message << std::endl;
}
int main() {
	std::cout << "hello world" << std::endl;
	Log("hello world");
	std::cin.get();
}