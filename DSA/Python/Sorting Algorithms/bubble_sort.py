arr = [int(item) for item in input("Enter the list items : ").split()]
for i in range(len(arr)):
  for a in range(0,len(arr)-i-1):
    if (arr[a] > arr[a+1]):
      arr[a], arr[a+1] = arr[a+1], arr[a] 

print('Sorted Array:',arr)

'''
Analysis of Bubble Sort
Time Complexity:

Best Case: O(n)

The Best Case for bubble sort occurs when the list is already sorted or nearly sorted. In this case, bubble sort algorithm will terminate after the first iteration since no swaps were to be made. If there is no swapping, only n iterations are to be completed.

Average Case: O(n^2)

In average case, we need to do n iterations. In each iterations we do comparison and perform swapping if required. If the size of array is n then, the first iteration performs (n-1) comparisons, the second performs (n-2) comparisons and so on. Thus, total number of comparisons are n(n-1)/2.

Therefore time complexity is O(n^2)

Worst Case: O(n^2)

In worst case, the array is reversely sorted. So we need to do (n-1) iterations in the first iteration, (n-2) in the second and so on.

Therefore time complexity is O(n^2)'''