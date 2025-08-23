# # x = []
# # y = [1,2,3,4,5]
# # z = [1,"Hello",3.14,True]

# x = [2.,56,78,9]
# x.append(8)
# x.sort()
# print(x)
my_array = [7,12,9,4,11,8]
minVal = my_array[0]
for i in my_array:
    if i < minVal:
        minVal = i
print("lowest value",minVal)        
