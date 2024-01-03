import numpy as np
import pandas as pd
# 创建Series类型--数组
# Series是一维数组
# list1 = [1,2,3,4]
# s = pd.Series(list1)# 把list1转换成Series类型并存储到s中
# print(s)# dtype是值的类型，左边为索引值，右边是值
# print(s.values)# 输出s中存储的值
# print(s.index)# 输出s中的索引，读的方法类似于range
    # 看不懂的话可以强制转换：
# print(list(s.index))
# s.index = ['a','b','c','d']# 修改索引
# print(s)
    # 或者可以：
# s.index = list('ABCD')
# print(s)

# 创建Series类型--字典
# d = {
#     '是一':'1',
#     '是二':'2'
# }
# s = pd.Series(d)
# print(s)
# s.index = list('AB')
# print(s)
# d = {
#     'a':np.random.randint(0,3,size = (2,3)),# 在【0,3）范围中随机选择数字，组成2个3维数组，封装为1个元素后索引值为a
#     'b':np.random.randint(0,5,size = (2,4))
# }
# s = pd.Series(d)
# print(list(s.values))

# Series索引
# print(s.[['a','b']])# 读取索引为a,b的值，此时返回Series类型,如果只使用一个则为元素类型
# print(s.loc[['a','b']])# 推荐方法
# print(s[[0,2]])# 用下标返回对应值
# print(s.iloc[[0,2]])# 推荐方法

# # Series切片
# s = pd.Series({
#     '语文':99,
#     '数学':96,
#     '英语':80,
#     '物理':60,
#     '化学':61
# })
# print(s[1:4])
# print(s['数学':'物理'])# 两者本质上一样

# Series运算
# 与数字运算： + - * / //(整除) **(平方) %
# Series之间运算：索引名相同进行运算，如果没有相同索引名则返回NaN
    # 如果想保留，则可以用s.add(s1,fill_value=0)
        # 如果有索引值无法匹配，则设定默认值为0后再运算
# s = pd.Series({
#     '语文':1,
#     'a':3,
#     '1':6
# })
# s1 = pd.Series({
#     '数学':10,
#     'a':10
# })
# print(s1.add(s,fill_value=0))