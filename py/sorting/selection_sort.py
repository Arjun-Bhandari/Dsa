def selection_sort(a):
    n  = len(a)
    for i in range(n):
        min_idx = i
        for j in range(i,n):
            if(a[min_idx] > a[j]):
                min_idx = j
        a[i],a[min_idx] = a[min_idx],a[i]
                
            
a = [64,32,25,45,20,15]
selection_sort(a)
print(a)