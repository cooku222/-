n = int(input())
output = ""
for i in range(1, n + 1):
    for j in range(i):
        output += "*"
    output += "\n"
    
print(output)