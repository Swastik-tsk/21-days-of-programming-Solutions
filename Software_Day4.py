
a, b, i, j, flag = 0, 0, 0, 0, 0
  
    
print("Enter lower bound;")
a = int(input()) 
print(a) 
      
print("Enter upper bound:")
b = int(input()) 
print(b) 
      
    
  
for i in range(a, b + 1): 
  
    if (i == 1): 
        continue
  
    flag = 1
          
    for j in range(2, i // 2 + 1): 
        if (i % j == 0): 
            flag = 0
            break
              
       
    if (flag == 1): 
        print(i, end = " ") 
