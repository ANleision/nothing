#include <iostream>

//void print(const char* message);//���߱༭��������һ��cpp�ļ��ж������һ������������message���Բ�д
////void prin(const char* message);//һ��δ������ĺ���
//int main() { 
//	std::cout << "Helloworld" << std::endl;//<<������������������أ�û�㶮��
//	//<< �������Ϊһ������������������ʹ�������ռ�std�е�cout��������ӡHelloworld��Ȼ����ʹ��endl�������л���
//	//���ñ�׼���ʱ��ʹ��std�������÷Ǳ�׼����iostream.h����Ҫʹ��
//	//���߿���ʹ�� using namespace std �����߱༭��Ҫʹ��std�ռ��к���
//	std::cin.get();//���е��˴�ʱ���������ͣһ�£�������س�������������ĳ���
//	std::cout << "helloWorld" << std::endl;
//	std::cin.get();
//	print("heLLoWORld");//ʹ����function����ĺ���
//}
////���ʱ������Ҽ���Ŀ����������ɣ��������ļ��ᱻ������ճ����һ������exe�ļ�
////��������Ҽ���������һ��Դ�ļ�����ʹû���������ļ��ж��庯�������ᱨ��

//int main() {
//	int value = 8;
//	// int �ɴ洢Լ-20�ڵ�20�ڵ���ֵ,һ��int��СΪ4�ֽڣ���32������λ������1������λΪԤ��λ�����ڱ�ʶ����������ʵ����int���Ա�ʾ��2^31
//	//�������Ҫ����������ʹ���޷�����unsiged int�������Ϳ��Ա�ʾ0~2^32�η�����������
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
//	char a = 'A';//�����ϻ�������
//	std::cout << a << std::endl;
//	std::cin.get();
//	a = 65;//ASCII��ֵ65��Ӧ���ַ�ΪA
//	std::cout << a << std::endl;//֮���Դ�ӡA����Ϊa������Ϊchar����char����coutʱ����Ϊa��һ���ַ�����������
//	std::cin.get();
//	short b = 65;
//	std::cout << b << std::endl;
//	std::cin.get();
//}

//int main() {
//	//float value = 5.5;//�����ͣ��5.5�ϣ�ʵ���ϻᷢ��������Ϊ˫��������double
//	float value = 5.5f;//�����Ҫ����һ������������float���ں������f�������������float����
//	std::cout << value << std::endl;
//	std::cin.get();
//}

int main(){
	bool value = 2;//boolֵΪ���򷵻�1��Ϊ�ٷ���0
	std::cout << value << std::endl;
}