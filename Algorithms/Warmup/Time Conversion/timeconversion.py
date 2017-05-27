time = input().strip().split(":")

if time[-1][-2:] == "PM" and time[0] != "12":
    time[0] = str(int(time[0]) + 12)
elif time[-1][-2:] == "AM" and time[0] == "12":
    time[0] = "00"

print("%s:%s:%s" % (time[0], time[1], time[2][:2]))
