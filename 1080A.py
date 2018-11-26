'''
n - number of friends
k - number of sheets in notebook

one friend needs 2 red, 5 green and 8 blue sheets


on the first example:
    n = 3, k = 5
    
    Petya needs 6 red, 15 green and 24 blue sheets
    if each notebook contains 5 sheets, then he needs 2 red, 3 green and 5 blue notebooks
    or (n*redNeeded)/k + (n*greenNeeded)/k + (n*blueNeeded)/k
    but (n*redNeeded)/k = (3*2)/5 which will return 1. so we need to check for reminder and if it exists, add 1 to the sum
    on the other hand, let's imagine situation like this:
        n = 3, k = 7
        in this case => (n*redNeeded)/k = (3*2)/7 which will return 0, but this means, that one notebook is enough and we would have extra sheets.
        so we also should check for this case and if true, also add 1 to the sum
        
     at the end print the sum 
'''

n,k = map(int, input().split())

red = n*2
green = n*5
blue = n*8

ans = red//k + green//k + blue//k

if red%k > 0 or red//k == 0:
    ans +=1
if green%k > 0 or green//k == 0:
    ans +=1
if blue%k > 0 or blue//k == 0:
    ans +=1


print (ans)