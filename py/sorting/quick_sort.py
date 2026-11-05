def partition(arr,l,r):
    pivot = arr[l]
    i = l+1
    j = r
    while True:
        while i <= j and arr[i] < pivot:
            i = i+1
            
        while i <= j and arr[j]  > pivot:
            j = j-1
            
        if i < j : 
            arr[i], arr[j] = arr[j], arr[i]
        else:
            break
    arr[l], arr[j] = arr[j], arr[l]
    return j


def QuickSort (arr, l, r ):
    if l < r:
        P = partition(arr,l,r)
        QuickSort(arr, l, P - 1)
        QuickSort(arr, P + 1, r)
    
arr  = [22,35,20,15,40,5]

QuickSort(arr, 0, len(arr)-1)
print(arr)