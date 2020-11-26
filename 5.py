i=int()
j=int()
k=int()
f=int()
for i in range(2,100):
    for j in range(2,100):
        if(i % j ==0):
            break
        elif(i == j+1):
            f1=int(1)
            f2=int(1)
            for k in range(2,11):
                f=f1+f2
                f1=f2
                f2=f
                if(f==i):
                    print('the simple number Fibonacci is ',f)
                    print('ordinal number of the Fibonacci simple number is',k+1,'\n')
