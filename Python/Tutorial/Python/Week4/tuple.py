#dictionary
#key has to be unique and immutable
#immutable: int, string and tuple

grades = {
    ('FS1', 1) : 45,
    ('FS1', 2) : 75,
    ('FS1', 3) : 25,
    ('FS1', 4) : 65,

    ('FS2', 1) : 75,
    ('FS2', 2) : 40,
    ('FS2', 3) : 70,
    ('FS2', 4) : 80,
}

print(grades[('FS1', 1)])
print(grades)
print(grades.keys())
print(grades.values())
print(grades.items())

for key, value in grades.items():
    print(key, value)
print()

for key in grades.keys(): #or just grades also can
    print(key)
print()

for value in grades.values():
    print(value)
print()

if ('FS1', 1) in grades:
    print("YES")
else:
    print("NO")

grades.update({('FS1', 1) : 90}) #the argument for update function must be a dictionary

#if found similar key will replace the content
#else just add at the end
print(grades[('FS1', 1)])

grades.clear() #empty the dictionary
print(grades)
