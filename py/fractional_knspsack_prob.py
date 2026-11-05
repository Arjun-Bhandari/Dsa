def fractional_knapsack(weights, values, capacity):
    n =len(weights)
     
    items = [(values[i],weights[i], values[i]/weights[i]) for i in range(n)]
    for i in range(n):
        for j in range (i+1,n):
            if(items[i][2] < items[j][2]):
                items[i], items[j] = items[j], items[i]
    
    if(capacity == 0):
        return 0
    
    max_profit = 0
    
    for price , weight, per_kg_price in items:
        if(capacity >= weight):
            capacity = capacity-weight
            max_profit +=price
        else:
            max_profit += per_kg_price * capacity
            break
    return max_profit
        
weights = [7,4,6,5,6]
values = [21,24,12,40,30]
print("Total Profit: ",fractional_knapsack(weights,values,20))

# items = [(24,6,4.0), (12,6,2.0)]

        #   items[0][0] = 24
              #  [0][1] = 6
             #   [0][2] = 4.0