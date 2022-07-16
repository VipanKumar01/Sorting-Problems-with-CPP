# Name = Vipan Kumar
# GitHub user name = @VipanKumar01


# Finding the Result of the Series : 1 + 11 + 111 + 1111 +....n = ?

n = int(input("Enter the No."))
sum = 0
temp = 1
     
for i in range(1, n + 1):
    sum = sum + temp
    temp = (temp * 10) + 1
    
print("The Result of this series :",sum)

# --HappyCode--
