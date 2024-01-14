# print("Hello, world!") # 终端输出Hello, world!
# print('ANleision', 'and', 'lintcode')# 终端将逗号换为空格连接在一起输出
# print(300)
# print('1 + 299 = ',1 + 299)# 可以用于计算结果或者输出整数

# 用户输入字符存入变量中,回车完成输入
# name = input('input something: ')
# print(name)

# python 3 有六个数据类型：数字 字符串 元组 列表 集合 字典
# 其中，前三个不可变，后三个可变
# 数字类型支持int(长整形) float bool complex(复数)
# a, b, c, d = 20, 5.5, True, 4+3j
# print(type(a), type(b), type(c), type(d))# 用type函数查询变量的类型
# print(5 + 4)  # 加法
# print(4.3 - 2) # 减法
# print(3 * 7)  # 乘法
# print(2 / 4)  # 除法，得到一个浮点数
# print(2 // 4) # 除法，得到一个整数
# print(17 % 3) # 取余 
# print(2 ** 5) # 乘方
# 使用单引号或双引号来创建字符串，使用三引号创建多行字符串
# 字符串要么使用两个单引号，要么两个双引号，不能一单一双
# print('Hello World!')
# print("Jack")
# print("")                   # 空字符串
# print("it's 'apple'")         # 双引号中可以嵌套单引号
# print('This is "PLANE"!')   # 单引号中可以嵌套双引号
# print('what is 'your'name') # 但是单引号嵌套单引号或者双引号嵌套双引号就会出现歧义
# 正确做法
# print('what is \'your\'name')
# 列表可以完成大多数集合类的数据结构实现。列表中元素的类型可以不相同
# 它支持数字，字符串甚至可以包含列表（所谓嵌套）。
# 列表是写在方括号 [] 之间、用逗号分隔开的元素列表
# 元组写在小括号 () 里，元素之间用逗号隔开。与列表不同之处在于其不可被编辑
# tuple = ( 'abcd', 987 , 1.59, 'ANleision', 7.2  )
# tinytuple = (123, 'ANleision')
# print(tuple)          # 输出完整元组
# print(tuple[0])       # 输出元组的第一个元素
# print(tuple[1:3])     # 输出从第二个元素开始到第三个元素
# print(tuple[2:])      # 输出从第三个元素开始的所有元素
# print(tinytuple * 2)  # 输出两次元组
# print(tuple + tinytuple) # 连接元组
# 元组与字符串类似，可以被索引且下标索引从 0 开始，-1 为从末尾开始的位置
# 集合（set）是由一个或数个形态各异的大小整体组成的，构成集合的事物或对象称作元素或是成员。
# 基本功能是进行成员关系测试和删除重复元素。
# 可以使用大括号 {} 或者 set() 函数创建集合
# 注意：创建一个空集合必须用 set() 而不是 {}，因为 {} 是用来创建一个空字典。
# set_1 = set({'1','2','3','4'})
# if '5' in set_1:
#     print('5 in the set "set_1"')
# else:
#     print('5 is not in the set "set_1"')
# a = set('abcde')
# b = {'b','f','a'}
# print(a-b)# 差集
# print(a|b)# 并集
# print(a&b)# 交集
# print(a^b)# 补集，相对于对方独有的取出
# 集合具有无序性，所以集合本身的输出顺序可能改变，但内容相同
# 字典是一种映射类型，字典用 { } 标识
# 它是一个无序的 键(key) : 值(value) 的集合。
# 键(key)必须使用不可变类型。
dict_ = {}
dict_['one'] = "AN"
dict_[2] = "leision"
tinydict = {'name': 'ANlesion', 'code': 999, 'site': 'gith^b'}
print(dict_['one'])    # 输出键为 'one' 的值
print(dict_[2])        # 输出键为 2 的值
print(tinydict)       # 输出完整的字典
print(tinydict.keys())   # 输出所有键
print(tinydict.values())  # 输出所有值
