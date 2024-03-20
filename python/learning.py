'''
计算a+aa+aaa+aaaa+......+aaa...a(n个a)的值
'''
# a = int(input('输入a的值:'))
# b = a
# n = int(input('输入最后一项a的个数'))
# addition = 0
# 方法1 while循环
# i = 0
# while i < n:
#     addition = a + addition
#     i += 1
#     a = b + a * 10
# print('算式的结果为:'+str(addition))
# 方法2 for循环
# for i in range(1,n+1) :
#     addition += a
#     a = a+b*10**i
# print('算式的结果为：'+str(addition))
'''
输入一个自然数,获取二进制最右端的数然后打印为10进制
'''
# num = int(input('请输入数字:'))
# print('结果为：'+ str(num & (~num+1)))
'''
对字符串进行切片
'''
# StringName = 'ANleision'
# print('\n第一到第五的字符:')
# print(StringName[0:5])# 不包含索引为5的字符
# print(StringName[0:-4])# 不包含从左往右数第四个字符
# print(StringName[:-4])
# print('\n第六到第十的字符:')
# print(StringName[-4:])

"""
温度的刻画有两个不同体系：摄氏度（Celsius）和华氏度（Fahrenheit）。
请编写程序将用户输入华氏度转换为摄氏度，或将输入的摄氏度转换为华氏度。
转换算法如下：（C表示摄氏度、F表示华氏度）
         C = ( F - 32 ) / 1.8
         F = C * 1.8 + 32
要求如下：
(1) 输入输出的摄氏度可采用大小写字母C结尾,温度可以是整数或小数，如：12.34C指摄氏度12.34度；
(2) 输出保留小数点后两位，输入格式错误时，输出提示：输入格式错误；
(3) 使用input()获得测试用例输入时，不要增加提示字符串。
"""
# a = input()
# c = a[-1]
# c = c.upper()
# a = eval(a[:-1])
# if c == 'C' :
#     a = a*1.8+32
#     print('%.2fF'%a)
# elif c == 'F':
#     a = (a-32)/1.8
#     print('%.2fC'%a)
# else:
#     print('输入格式错误')
'''
冰雹猜想:
对于每一个正整数，如果它是奇数，则对它乘3再加1
如果它是偶数，则对它除以2，如此循环，最终都能够得到1。输入一个数n，输出变换序列。
如n=6，得出序列6，3，10，5，16，8，4，2，1
'''
# n = int(input('请输入正整数：'))
# if n <= 0:
#     print('输入错误，重新输入')
# while n != 1:
#     n = 3*n+1 if n%2 != 0 else n/2
#     print(str(int(n)),end=',' if n != 1 else '\n')
'''
输入正整数n，输出不超过n且末尾数字为2的所有7的倍数的数字个数
'''
# n = int(input('输入正整数：'))
# Number = []
# if n > 42:
#     for i in range (42, n, 10):
#         if i % 7 == 0:
#             Number.append(i)
# print(len(Number))
'''
请你设计一个函数 print_avg，这个函数接收多个关键字参数作为学生的信息
接收多个数字参数作为这个学生多次考试的成绩，请从学生信息中提取出学生的 student_name，student_age
然后求出这个学生多次考试的平均成绩 Average（保留两位小数）
'''
# def print_avg(*mark,**kw):
#     name = kw['student_name']
#     age = kw['student_age']
#     avg = sum(mark)/len(mark)
#     return f'name: {name}, age: {age}, avg: {avg:.2f}'
'''
lambda排序
'''
list1 = [(1,'c'),(2,'b'),(3,'a')]
print(list1,sorted(key=lambda x:x[1],reverse=True))# 保留原列表，创建新列表
list1.sort(key=lambda x:x[1],reverse=True) # 在原列表上改动，按第二个元素排列，并降序
print(list1)
list1.sort(key=lambda x:x[0],reverse=True) # 在原列表上改动，按第一个元素排列，并降序
print(list1)