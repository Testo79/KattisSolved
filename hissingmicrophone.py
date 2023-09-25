a=input()
b=[]
for i in range(len(a)-1):
    if a[i]==a[i+1]=="s":
        b.append("o")
if (len(b))>0 :
    print("hiss")
else :
    print("no hiss")

