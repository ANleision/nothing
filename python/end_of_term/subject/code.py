# 数据处理包
import numpy as np
import pandas as pd
# 绘图包
import seaborn as sns
import matplotlib.pyplot as plt
df = pd.read_excel("end_of_term\subject\data.xlsx")# 引入excel数据
df.index = ['黑龙江省','吉林省','辽宁省','河北省','甘肃省','青海省','陕西省','河南省','山东省','山西省','安徽省','湖北省','湖南省','江苏省','四川省','贵州省','云南省','浙江省','江西省','广东省','福建省','海南省','新疆维吾尔族自治区','内蒙古自治区','宁夏回族自治区','广西壮族自治区','西藏自治区','北京市','上海市','天津市','重庆市']
# 设定行索引名
df.columns = [
    '面积','人口','GDP','医疗机构数','本科生录取率','车辆数'
]# 设定列索引名
# 计算最大值最小值
print(df.max())
print('end')
print(df.min())
# 计算每一列的平均数
average = df.mean()
# # 计算每一列的方差
variance = df.var()
print(variance)
# # 以spearman方法计算的相关系数矩阵
spearman = df.corr(method='spearman')
spearman.to_excel('spearman.xlsx')# 保存到excel
# KMO检验
from factor_analyzer.factor_analyzer import calculate_kmo
kmo_all, kmo_model = calculate_kmo(df)
print(kmo_all)
# Bartlett's球状检验
from factor_analyzer.factor_analyzer import calculate_bartlett_sphericity
chi_square_value, p_value = calculate_bartlett_sphericity(df)
print(chi_square_value, p_value)
m, n = np.shape(df)#看行列数
data_adjust = []
avgs = np.tile(average, (m, 1))#均值矩阵
data_adjust = df - avgs# 去中心化
from sklearn import preprocessing
df = preprocessing.scale(df)# 标准化
# print(df)
covX = np.around(np.corrcoef(df.T),decimals=3)# 相关系数矩阵
# print(covX)
featValue, featVec=  np.linalg.eig(covX.T)  #求解系数相关矩阵的特征值和特征向量
# 特征值降序
featValue = sorted(featValue)[::-1]
# 同样的数据绘制散点图和折线图
plt.scatter(range(1, df.shape[1] + 1), featValue)
plt.plot(range(1, df.shape[1] + 1), featValue)
# 显示图的标题和xy轴的名字
plt.title(" ")  
plt.xlabel("Factors")
plt.ylabel("Eigenvalue")
plt.grid()  # 显示网格
plt.show()  # 显示图形
# 求特征值贡献度与累计贡献度
gx = featValue/np.sum(featValue)
lg = np.cumsum(gx)
# 求主成分
k=[i for i in range(len(lg)) if lg[i]<0.85]
k = list(k)
print(k)
# 求主成分对应特征向量矩阵
selectVec = np.matrix(featVec.T[k]).T
selectVe=selectVec*(-1)
# 求主成分得分
finalData = np.dot(data_adjust,selectVec)
print(finalData)
# 绘热力图
plt.figure(figsize = (14,14))
ax = sns.heatmap(selectVec, annot=True, cmap="BuPu")
# 设置y轴字体大小
ax.yaxis.set_tick_params(labelsize=15)
plt.title("Factor Analysis", fontsize="xx-large")
# 设置y轴标签
plt.ylabel("Sepal Width", fontsize="xx-large")
# 显示图片
plt.show()