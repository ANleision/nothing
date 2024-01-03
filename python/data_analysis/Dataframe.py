import numpy as np
import pandas as pd
# dataframe是二维的表格型数据结构，可以理解为由series组成的字典
# 或者说是把series从一维拓展到多维

# 字典创建dataframe
# d = {
#     'name':['a','b','10'],
#     'age': ['11','22','10'],
#     'number':['one','three','two'],
#     'price':['dollor','RMB','coin']# 如果行列数不一致，则会报错
# }
# df = pd.DataFrame(d,index = list('ABC'))
# print(df)
# print(df.values)
# print(df.columns)# 列索引
# print(list(df.index))# 行索引
# print(df.shape)# 输出dataframe类型对象的形状
# 设置行列索引名的方法可以参照Series

# print(df[['name','age']])# 默认取列数据，使用2个中括号时为dataframe，1个时为series
# print(df.loc[['A','B']])# 取行数据，输出类型同上
# print(df['age']['B'])# 先取列，再取行

# dataframe切片
# print(df[1:3])# 提取[1,3)行的数据
# print(df.iloc[:,1:3])# 提取[1,3)列的数据,先对行切片再对列切片
# print(df.loc[['A','C'],['name','price']])# 取不连续同行不连续同列

# dataframe运算
d1 = {
    '语文':['54','61','97','89'],
    '数学':['85','57','84','92'],
    '英语':['38','95','93','43'],
    '化学':['14','89','41','70'],
    '物理':['94','81','21','31'],
    '生物':['97','73','39','53']
}
df1 = pd.DataFrame(d1,index = ['小明','小红','小黄','小绿'])
d2 = {
    '语文':['54','61','97','89'],
    '数学':['85','57','84','92'],
    '英语':['38','95','93','43'],
    '化学':['14','89','41','70'],
    '物理':['94','81','21','31'],
    '生物':['97','73','39','53']
}
df2 = pd.DataFrame(d2,index = ['小明','小红','小黄','小绿'])
# 运算同Series
