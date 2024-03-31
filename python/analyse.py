import numpy as np
import pandas as pd

# s = pd.Series(np.arange(6), index=list('abcdef'), name='python')
# print(s)

# 支持切片，索引，布尔索引
# print('s中索引为a的元素是',s['a'])
# print('-'*30)
# print(s[:4])
# print('-'*30)
# print(s[s>2])

# 对应位置上可以进行四则运算
# result1 = s + s
# print(result1)
# print('-'*30)

# s1 = pd.Series(np.arange(4), index=list('abcd'), name='s1')
# s2 = pd.Series(np.arange(4), index=list('bcde'), name='s2')
# print(s1)
# print(s2)
# 由于Series默认用index值对齐，所有会出现缺失值
# print(s1+s2)
# s3 = (s1 + s2)
# # 检测缺失值,若有缺失则返回True，否则返回False
# print(s3.isna())
# # 填充缺失值
# s4 = s3.fillna(1)
# print(s4)
# # 查看值
# print(s4.values)
# # 查看索引
# print(s4.index)
# 单列表创建dataframe
# data = [1,2,3,4,5]
# df = pd.DataFrame(data)
# print(df)
# 嵌套列表创建dataframe
# data=[['ming',10],['hong',20],['zhang',11]]
# df = pd.DataFrame(data,columns=['Name','Number'])
# print(df)
# 