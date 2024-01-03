s=input()
l=[]
for a in s:
    l.append(ord(a))
l.sort()
for a in l:
    print(chr(a),end='')