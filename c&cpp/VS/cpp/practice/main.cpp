#include <iostream>
using namespace std;
//p1
//int main() 
//{
//    std::cout << "Hello world!" << std::endl;
//}
//p2
//int main() 
//{
//    char name[10];
//    int age;
//    std::cin >> name;
//    std::cin >> age;
//    std::cout << name << " is " << age << " years old.";
//}
//p3
//int main() {
//    int a, b;
//    std::cin >> a;
//    std::cin >> b;
//    if (a <= b)
//    {
//        std::cout << "a is smaller than or equal to b" << std::endl;
//    }
//    else
//    {
//        std::cout << "a is larger" << std::endl;
//    }
//}
//p4
//int main() {
//    int n;
//    std::cin >> n;
//    int i = 0;
//    for (i = 0;i < n;i++)
//    {
//        std::cout << "n is " << i << " now" << std::endl;
//    }
//
//}
//p5
//#include <string>
//using namespace std;
//string WhoAreYou(string name, int age)
//{
//    string age_string = to_string(age);
//    string result = "My name is " + name + ", I'm " + age_string + " years old.";
//    return result;
//}
//
//int main()
//{
//    string name;
//    int age;
//    cin >> name >> age;
//    cout << WhoAreYou(name, age) << endl;
//}
//p6
//#include <string>
//using namespace std;
//int main() 
//{
//    int i = 233;
//    double d = 11.41;
//    bool b = true;
//    char c[2] = "!";
//    string s = "Hello!";
//
//    cout << "int i = " << i << endl;
//    cout << "double d = " << d << endl;
//    cout << "bool b = " << b << endl;
//    cout << "char c = " << c << endl;
//    cout << "string s = " << s << endl;
//}
//p7
//#include <iomanip>
//int main()
//{
//    double r;
//    cin >> r;
//    double pi = 3.14;
//    double answer = r * r * pi;
//    cout << setiosflags(ios::fixed) << setprecision(2) << answer*100/100 << endl;//�ȳ���100�ٳ���100��ԭ��������������������
//    //c++��������������ת����ʱ���������ضϡ�����"
//    //��ʱ���Խ��������룬�����λͨ�����Ի��߳���ʮ��n�η��ķ���Ų�Ƶ�С�������ĵ�һλ��Ȼ������0.5��������
//	  //��ɺ��ٽض�Ȼ����Ի��߳���ʮ��n�η����л�ԭ
//	  //����12.345���б�����λС���������ȳ���100�õ�1234.5֮�������0.5�õ�1235.0�ضϣ�ʹ��ǿ������ת�����õ�1235������100�õ� 12.35
//}
// printf("%.2f", answer); cout << endl; //��ӡ���С�����2λ������������
//cout << setprecision(2) << answer << endl;//���2λ��Ч���֣�����������С�����֣����������� 
//cout << setiosflags(ios::fixed) << setprecision(2) << answer << endl;//���С�����2λ�����������룬��Ӱ������setprecision()���
//cout << setprecision(2) << answer << endl;//��ǰ��Ӱ�죬ֻ���С�����2λ���������ǰ����������ֵ�7λ,����������
//cout << setiosflags(ios::fixed) << setprecision(2) << n * 100 / 100 << endl;//�����������룬������λС���ͳ˺ͳ�10�ļ��η�
//p8
//#include<ctype.h>//����isalpha�ĺ�����
//int main()
//{
//    char c;
//    cin >> c;
//    if (isalpha(c)) //�����c����ĸ����true�����򷵻�false
//    {
//        cout << c << " is a letter." << endl;
//    }
//    else 
//    {
//        cout << c << " is not a letter." << endl;
//    }
//}
//p9
//int main()
//{
//    int y;
//    cin >> y;
//    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//    {
//        cout << y << " is a leap year." << endl;
//    }
//    else
//    {
//        cout << y << " is not a leap year." << endl;
//    }
//}
//p10
//int main()
//{
//    int a, i = 0;
//    cin >> a;
//    if (a == 0)
//    {
//        i = 1;
//        cout << i << endl;
//    }
//    else
//    {
//        while (a != 0)
//        {
//            a = a >> 1;//�����ƶ�һλ�൱�ڳ���2
//            i++;
//        }
//        cout << i << endl;
//    }
//}
//p11
//int abs(int x)
//{
//    if (x < 0) return -x;
//    return x;
//}
//int main()
//{
//    int n;
//    cin >> n;
//    cout << abs(n) << endl;
//}
// p12
//int main()
//{
//    int n;
//    cin >> n;
//    switch (n)
//    {
//    case 0:
//    case 1:
//    case 2:
//        cout << "Crap!" << endl;
//        break;
//    case 3:
//    case 4:
//    case 5:
//        cout << "uh..." << endl;
//        break;
//    case 6:
//    case 7:
//    case 8:
//        cout << "Not bad~" << endl;
//        break;
//    case 9:
//    case 10:
//        cout << "Excellent!" << endl;
//        break;
//    }
//}
//p14
