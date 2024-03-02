# 计算a+aa+aaa+aaaa+......+aaa...a(n个a)的值
# print('计算a+aa+aaa+aaaa+......+aaa...a(n个a)的值')
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
print('输入一个自然数,获取二进制最右端的数然后打印为10进制')
num = int(input('请输入数字:'))
print('结果为：'+ str(num & (~num+1)))
