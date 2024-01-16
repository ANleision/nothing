#include <stdio.h>
// int a;
//含义：在内存中找到一块区域，命名为 a，用于存放整型数据
// 标准：
// 只能由字母(A~Z，a~z)、数字(0-9) 和下划线(_) 组成
// 第一个字符 必须是 字母或下划线，不能是数字
// a = 124;
// = 表示赋值，把数据存入内存中
// 第一次赋值称作 变量的初始化，可以对其进行重新赋值
// 可以连续定义多个变量
// int b,c,d = 1;
// int main()
// {
//     int a = 1;
//     printf("%d",a);
//     return 0;
// }
// %hd<<short int ;%d << int ;%ld << long int

// 十位数换N进制：
// 整数部分除N取余，逆序排列 如26(10)= 11010(2)
// 小数部分乘N取整，顺序排列 如0.625(10) = 0.101(2)
// 十六进制中，A~F表示10~15
// 因为8 = 2^3, 16 = 2^4
// 所以二进制中每三位对应八进制一位，每四位对应十六进制一位
// 如1011100111(2) = 1346(8) = 2E7(16)

// C语言表示二八十六进制
// 0b 0 0x(不区分大小写)
// 短长整形可以类比十进制，不可以使用printf输出整型二进制
// %o(8) %x(16)
int main()
{
    int number_0b = 0b1001010;
    int number_0 = 034571;
    int number_0x = 0X273E91A;
    printf("a = %#o, b = %o, c = %#o\n", number_0b, number_0, number_0x);
    printf("a = %d, b = %#d, c = %d\n", number_0b, number_0, number_0x);
    printf("a = %X, b = %X, c = %#X\n", number_0b, number_0, number_0x);// 如果带上# 则可以输出前缀
    return 0;
}
