class Person:
    def __init__(self, initial_age):
        if initial_age < 0:
            print("Age is not valid, setting age to 0.")
            self.age = 0
        else:
            self.age = initial_age

    def amIOld(self):
        if self.age < 13:
            print("You are young.")
        elif self.age >= 13 and self.age < 18:
            print("You are a teenager.")
        else:
            print("You are old.")

    def yearPasses(self):
        self.age += 1


# Supplied code
t = int(input())
for i in range(t):
    age = int(input())
    p = Person(age)
    p.amIOld()
    for j in range(3):
        p.yearPasses()
    p.amIOld()
    print("")
