def bucket_sort(input_list):
     
    maximum = max(input_list)
    size = maximum/len(input_list)

    buckets_list= []
    for x in range(len(input_list)):
        buckets_list.append([]) 

    for i in range(len(input_list)):
        j = int (input_list[i] / size)
        if j != len (input_list):
            buckets_list[j].append(input_list[i])
        else:
            buckets_list[len(input_list) - 1].append(input_list[i])

    for z in range(len(input_list)):
        insertion_sort(buckets_list[z])
            
    final_output = []
    for x in range(len (input_list)):
        final_output = final_output + buckets_list[x]
    return final_output

def insertion_sort(bucket):
    for i in range (1, len (bucket)):
        var = bucket[i]
        j = i - 1
        while (j >= 0 and var < bucket[j]):
            bucket[j + 1] = bucket[j]
            j = j - 1
        bucket[j + 1] = var

def main():
    input_list = [5.20, 9.22, 9.43, 3.36,0.39,2.47]
    print('Unsorted List - ')
    print(input_list)
    sorted_list = bucket_sort(input_list)
    print('Sorted List - ')
    print(sorted_list)

if __name__=="__main__":
    main()
