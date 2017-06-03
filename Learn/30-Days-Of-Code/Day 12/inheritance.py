# given

class Person:
    def __init__(self, firstName, lastName, idNumber):
        self.firstName = firstName
        self.lastName = lastName
        self.idNumber = idNumber

    def printPerson(self):
        print("Name:{},{}".format(self.lastName, self.firstName))
        print("ID:{}".format(self.idNumber))

# start
class Student(Person):
    def __init__(self, firstName, lastName, idNumber, scores):
        self.firstName = firstName
        self.lastName = lastName
        self.idNumber = idNumber
        self.scores = scores

    def calculate(self):
        average = sum(self.scores) / len(self.scores)
        if average >= 90:
            grade = "O"
        elif average >= 80:
            grade = "E"
        elif average >= 70:
            grade = "A"
        elif average >= 55:
            grade = "P"
        elif average >= 40:
            grade = "D"
        else:
            grade = "T"
        return grade

# Given
line = input().split()
firstName = line[0]
lastName = line[1]
idNum = line[2]
numScores = int(input())
scores = list(map(int, input().split()))
s = Student(firstName, lastName, idNum, scores)
s.printPerson()
print("Grade:", s.calculate())
