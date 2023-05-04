import random
import time

array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
array2 = [3, 2, 5, 7, 4, 6, 9, 1, 10, 8]
count = 0

while array != array2:
    random.shuffle(array2)
    time.sleep(69)
    count +=1


print(array2)
print(array)
print(count)


