from collections import Counter
for letter, counts in sorted(Counter(input()).most_common(3),key = lambda x:(-x[1],x[0])):
    print(letter, counts)
   
