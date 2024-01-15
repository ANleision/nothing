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
//    cout << setiosflags(ios::fixed) << setprecision(2) << answer*100/100 << endl;//先乘以100再除以100的原因是这样不会四舍五入
//    //c++当浮点型向整形转换的时候会产生“截断”现象"
//    //此时可以将进行摄入，舍入的位通过乘以或者除以十的n次方的方法挪移到小数点后面的第一位，然后将它加0.5进行舍入
//	  //完成后再截断然后除以或者乘以十的n次方进行还原
//	  //例如12.345进行保留两位小数的舍入先乘以100得到1234.5之后把它加0.5得到1235.0截断（使用强制类型转换）得到1235最后除以100得到 12.35
//}
// printf("%.2f", answer); cout << endl; //打印输出小数点后2位，会四舍五入
//cout << setprecision(2) << answer << endl;//输出2位有效数字，包括整数和小数部分，会四舍五入 
//cout << setiosflags(ios::fixed) << setprecision(2) << answer << endl;//输出小数点后2位，会四舍五入，会影响后面的setprecision()输出
//cout << setprecision(2) << answer << endl;//受前面影响，只输出小数点后2位，而不再是包括整数部分的7位,会四舍五入
//cout << setiosflags(ios::fixed) << setprecision(2) << n * 100 / 100 << endl;//不会四舍五入，保留几位小数就乘和除10的几次方
//p8
//#include<ctype.h>//含有isalpha的函数库
//int main()
//{
//    char c;
//    cin >> c;
//    if (isalpha(c)) //如果是c是字母返回true，否则返回false
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
//            a = a >> 1;//向右移动一位相当于除以2
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
