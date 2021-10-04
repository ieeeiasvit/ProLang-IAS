arr = [int(item) for item in input("Enter the list items : ").split()]

for i in range(len(arr)):
  key = arr[i]
  j = i-1

  while j >=0 and key < arr[j]:
    arr[j+1] = arr[j]
    j -= 1
    arr[j+1] = key

print('Sorted Array:',arr)

'''
Analysis of Insertion Sort

Time Complexity:

Best Case: O(n)

In best case, the array is sorted so swapping does not happen. The code compares n elements therefore making the time complexity O(n).

Average Case: O(n^2)

In average case the code compares and then will swap the elements making the total comparisons equal to n(n+1)/2.

Therefore time complexity is O(n^2)

Worst Case: O(n^2)

Worst Case will occur when the input array is in reversely sorted. The total comparisons will be same as in average case i.e. n(n+1)/2.

Therefore time complexity is O(n^2)'''