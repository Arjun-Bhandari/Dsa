def DnQ(arr, start,end):
    if(start == end):
        return arr[start], arr[end]
    
    if(start +1 == end):
        if(arr[start] < arr[end]):
            return arr[start], arr[end]
        else :
            return arr[end] , arr[start]
    # 0,1,2,3,4,5,6
    mid = start + (end - start) // 2
    
    if(start < end):
        min1, max1 = DnQ(arr, start, mid)
        min2, max2 = DnQ(arr, mid+1, end)
        
        if(min1 < min2):
            min_final = min1
        else:
            min_final = min2
            
        if(max1 > max2):
            max_final = max1
        else:
            max_final = max2
    
    return min_final, max_final
            
        
        
        
    
arr  = [10,5,15,2,6,8,14]

print(DnQ(arr,0, len(arr) - 1))
    # arr1 = start = start , mid
    # arr2 = start = mid+1 end  