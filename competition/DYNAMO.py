import sys

T=int(input())
for t in range(T):
    N=int(input())
    Lim=10**N
    A=int(input())
    S=A+(4*(Lim//2))
    print('{a}'.format(a=S))
    sys.stdout.flush()
    B=int(input())
    C=Lim-B
    print('{a}'.format(a=C))
    sys.stdout.flush()
    D=int(input())
    E=Lim-D
    print('{a}'.format(a=E))
    sys.stdout.flush()
    temp=A+B+C+D+E
    p=int(input())
    if p==-1 :
        break;
    
    
    