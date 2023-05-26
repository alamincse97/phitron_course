numbers = [12, 56, 98, 78, 56, 12, 6, 98]
person1 = ['Kala Chan', 'Kalipur', 23, 'student']
# key value pair 
# dictionary
# object
# hash table
# overlap with set
# {key: value, key: value, key: value}
person = {'name': 'Kala Pakhi', 'address': 'Kaliapur', 'age': 23, 'job': 'bekar'}
print(person)
print(person['job'])
print(person.keys())
print(person.values())
person['language'] = 'python'
person['name'] = 'sada pakhi'
del person['age']
print(person)

# special dictionary looping
for key, value in person.items():
    print(key, value)