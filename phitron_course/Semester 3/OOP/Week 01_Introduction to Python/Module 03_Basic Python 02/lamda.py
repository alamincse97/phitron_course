# lambda

# def doubled(x):
#    return x*2

doubled = lambda num : num * 2
squared = lambda num : num * num
result = doubled(44)
output = squared(9)
# print(result, output)

add = lambda x, y : x + y
sum = add(11, 33)
# print(sum)
numbers = [12, 56, 98, 78, 56, 12, 6, 98]
# doubled_nums = map(doubled, numbers)
doubled_nums = map(lambda x: x*2, numbers)
squared_nums = map(lambda x: x*x, numbers)
print(numbers)
print(list(doubled_nums))

actor = [
    {'name': 'sabana', 'age': 65},
    {'name': 'sabnur', 'age': 65},
    {'name': 'suhana', 'age': 65},
    {'name': 'sabakk', 'age': 65},
]

juniors = filter(lambda actor : actor['age'] < 40, actor)
print(list(juniors))