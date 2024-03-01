#include <stdio.h>
// int main(){
//     printf("Hello World");
//     return 0;
// }
// 使用二进制时需以 0b 或者 0B 开头(数字 0 和字母 b，不区分大小写)
// 使用八进制表示时必须以 0 开头
// 使用十六进制表示时必须以 0x 或者 0X 开头(数字 0 和字母 x，不区分大小写)
// 短整型、整型和长整型可以使用 %hd、%d 和 %ld 进行输出格式控制
// 不能使用 printf 函数输出整型二进制，但是可以通过其他转换函数
// 将结果以字符串的形式存储，并在 printf 函数中使用 %s 输出字符格式结果
int main(){
    int a,b,c;
    a = 023;
    b = 10;
    c = 0xbb;
    printf("%8d,%8d,%8d\n",a,b,c);
    printf("%8o,%8o,%8o\n",a,b,c);
    printf("%8x,%8x,%8x\n",a,b,c);
    return 0;
}