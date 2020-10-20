T= int(input())
while(T>0):
    txt=input()
    if(txt==txt[::-1]):
        print('wins\n')
    else:
        print('loses\n')
    T=T-1