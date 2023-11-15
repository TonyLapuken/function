arr = [1,2,3,4,5] # test case


#function
def summation(arr):
    sum = 0
    
    for i in range(len(arr)):
        sum += arr[i]
        
    return sum

print(summation(arr))
