arr = [int(item) for item in input("Enter the list items : ").split()]

for i in range(len(arr)):
  min = i
  for j in range(i+1,len(arr)):
    if arr[min] > arr[j]:
      min = j

  arr[i], arr[min] = arr[min], arr[i]

print('Sorted Array:',arr)

'''
Analysis of Selection Sort

Time Complexity:

Best Case: O(n^2)

The best case is when the array is already sorted. We can avoid swap in the best case but time spend to find the smallest element is still O(n) making n(n+1)/2 total comparisons.

Therefore time complexity is O(n^2)

Worst Case: O(n^2)

The worst case is when the array is reversely sorted i.e. the smallest element is at the end. There will be a total of n swaps and n(n+1)/2 comparisons.

Therefore time complexity is O(n^2)

Average Case: O(n^2)

Based on best and worst cases we know the number of comparisons will be same for every case i.e. n(n+1)/2.

Therefore time complexity is O(n^2)'''