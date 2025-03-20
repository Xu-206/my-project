# -*- coding: gbk -*-
luck_number=8
my_name='Xu'
print('数据类型是',type(luck_number))
print(my_name,"数值",luck_number)
#py动态修改变量的数据类型，通过付不同类型的值修改
luck_number='北京'
print('数据类型是',type(luck_number))
#允许指向同一值
no=number=1024
print(no,number)
print(id(no))#id查看内存地址
print(id(number))