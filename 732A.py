price, coin = map(int, input().split())


count = 1


while (price*count)%10!=0 and (price*count)%10!=coin:
    count+=1
    
print (count)