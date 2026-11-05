def Coin_Change_Prob(coins,amount):
    
    coins.sort(reverse=True)
    count = 0
    used_coins=[]
    for coin in coins:
        while amount >= coin:
            amount -= coin
            count += 1
            used_coins.append(coin)
    if amount != 0:
        return None
        
    return count, used_coins
        
            
coins  = [1,3,4]
amount = 6

print(Coin_Change_Prob(coins,amount))