n = int(input())

for _ in range(n):
    
    word = input()
    
    if len(word) == 5:
        print(3)
    else:
        if (word[1:] == 'ne') or (word[:2] == 'on') or (word[0] + word[2] == 'oe'):
            print(1)
        else:
            print(2)
