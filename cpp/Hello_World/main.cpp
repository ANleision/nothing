#include <iostream>

void print(const char* message);//���߱༭��������һ��cpp�ļ��ж������һ������������message���Բ�д
//void prin(const char* message);//һ��δ������ĺ���
int main() {
	std::cout << "Helloworld" << std::endl;
	//<< �������Ϊһ������������������ʹ�������ռ�std�е�cout��������ӡHelloworld��Ȼ����ʹ��endl�������л���
	//���ñ�׼���ʱ��ʹ��std�������÷Ǳ�׼����iostream.h����Ҫʹ��
	//���߿���ʹ�� using namespace std �����߱༭��Ҫʹ��std�ռ��к���
	std::cin.get();//���е��˴�ʱ���������ͣһ�£�������س�������������ĳ���
	std::cout << "helloWorld" << std::endl;
	std::cin.get();
	print("heLLoWORld");//ʹ����function����ĺ���
}
//���ʱ������Ҽ���Ŀ����������ɣ��������ļ��ᱻ������ճ����һ������exe�ļ�
//��������Ҽ���������һ��Դ�ļ�����ʹû���������ļ��ж��庯�������ᱨ��