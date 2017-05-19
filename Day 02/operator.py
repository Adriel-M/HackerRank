meal_cost = float(input())
tip = int(input())
tax = int(input())

tip_total = meal_cost * (tip / float(100))
tax_total = meal_cost * (tax / float(100))
total_cost = meal_cost + tip_total + tax_total
rounded_cost = round(total_cost)

message = "The total meal cost is {} dollars.".format(str(rounded_cost))
print(message)
