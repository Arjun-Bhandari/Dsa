def insertion_sort(a):
    n = len(a)
    for i in range(1,n):
        key = a[i]
        j = i-1
        
        while(j>=0 and key<a[j]):
            a[j+1] = a[j]
            j = j-1
        a[j+1] = key
        
a = [64,32,25,45,20,15]
insertion_sort(a)
print(a)