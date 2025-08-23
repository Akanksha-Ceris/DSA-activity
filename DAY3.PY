# def square(number):
#     print(number**2)
# result= square(4)
# # print(result)    
# def add(numOne,numTwo):
#     return numOne + numTwo
# print(add(5,6))
# question 3 polymorphism in functions
# write a function multiply that multiplies two numbers but can also accept and multiply strings.
# def multiply(p1,p2):
#     return p1* p2
# print(multiply(8,7))
# # question4
# import math
# def circle_stats(radius):
#     return math.pi * radius ** 2
# print(circle_stats(5))
# create a  function which calculate circumference and are of
# # circle when radius is given 
# import math
# def circle_stats(radius):
#     area = math.pi * radius **2
#     circumference = 2 * math.pi * radius
#     return area, circumference
# print(" Area",circle_stats(4))
# print("circumference", circle_stats(5))
# question default parameter value
# def greet(name= "user"):
#     return "Hello ," + name + "!"
# print(greet())
    
# # lamda function is a anonymus function
# def add(a,b):
#     return a+b
# # result = add(1,2)
# cube = lambda x: x ** 3
# print(cube(3))
# function with args

# write a function that takes variable nu,ber of arguments 
# and returns theirs sum
# def sum_all(*args):
#      print(args)
#      for i in args:
#           print(i*2)
#      return sum(args)
# print(sum_all(1,2,3,4,5))
# # print(sum_all(3,4))
# def print_kwargs(name,power):
#     print("Name",name,"Power:",power)
# # print_kwargs(name="shaktiman", power = "lazer")    
# def even_generator(limit):
#      for i in range(2,limit + 1,2):
#          return i 
# print(even_generator(12))        
# def addNum(a,b):
# #     addNum(2,3)
# def factorial(n):
#     return 5 * 4 * 3 * 2 * 1 
# print(factorial(5))
