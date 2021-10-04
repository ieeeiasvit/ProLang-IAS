def partition(arr, start, end):
  pivot = arr[start]
  low = start + 1
  high = end
  
  while True:
    while low <= high and arr[high] >= pivot:
      high = high - 1
      
    while low <= high and arr[low] <= pivot:
      low = low + 1
      
    if low <= high:
      arr[low], arr[high] = arr[high], arr[low]
    else:
      break

  arr[start], arr[high] = arr[high], arr[start]
  return high

def quickSort(arr, start, end):
  if start >= end:
    return
  p = partition(arr, start, end)
  quickSort(arr, start, p-1)
  quickSort(arr, p+1, end)

# Driver Code

arr = [int(item) for item in input("Enter the list items : ").split()]

quickSort(arr, 0, len(arr) - 1)
print('Sorted Array:',arr)

'''
Analysis of Quick Sort

Time Complexity:

Best Case: O(nlog(n))

The best case for quick sort occurs when the partition process always picks the middle element as pivot. The number of times we can partition the array of size n is log(n). Now we have log(n) partitioned levels and each level has to visit n inputs.

Therefore time complexity is O(nlog(n)).

Average Case: O(nlog(n))

In average case, we again have log(n) levels with each level to visit n inputs. Therefore the time complexity is same as best case i.e. O(nlog(n)).

Worst Case: O(nlog(n))

The worst case occurs when the partition process always picks greatest or smallest element as pivot. In this case, we do an O(n) partitioning level, but instead of getting two halves of equal size, we've ended up with one partition of one element, and one partition of N-1 elements. So we have O(n) levels of partitions and each has to visit n inputs.

Therefore time complexity is O(n^2).
'''