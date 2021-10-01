## BINARY SEARCH WITH RECURSION

def binary_search(arr, low, high, number):
    if high >= low:
        mid = (high + low) // 2
        if arr[mid] == number:
           return mid
        elif arr[mid] > number:
           return binary_search(arr, low, mid-1, number)
        else:
           return binary_search(arr, mid+1, high, number)
    else:
        return -1
arr = [5, 12, 17, 19, 22, 30]
number = 22
r = binary_search(arr, 0, len(arr)-1, number)
if r != -1:
    print("Element found at index", str(r))
else:
    print("Element is not present in array") 
