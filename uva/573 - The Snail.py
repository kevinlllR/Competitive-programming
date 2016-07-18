import sys

for line in sys.stdin:
        line=line.strip("\n").split()
        a,b,c,d=map(float,line)
        i=1
        res=0
        flag=0
        f=d*b/100
        if(a==0 and b==0 and c==0 and d==0):
                break
        while(1):
               res+=b
               if(b>0):
                        b-=f
               if(res>a):
                        break
               res-=c
               if(res<0):
                        break
               i+=1
               
        if(res<0):
                print("failure on day",i)
        else:
                print("success on day",i)

