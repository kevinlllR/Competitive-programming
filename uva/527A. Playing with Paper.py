import sys,math

for line in sys.stdin:
	a=[]
	for word in line.split():
		a.append(int(word))
	mayor=max(a[0],a[1])
	menor=min(a[0],a[1])
	cont=0
	flag=0
	while((mayor!=1 and menor!=1)):
		res=mayor%menor
		res1=int(mayor/menor)
		cont+=res1
		mayor=menor
		menor=res
		if(mayor==0 or menor==0):
			flag=1
			break
	if(flag==1):
		print(str(cont))
	else:
		cont+=mayor
		print(str(cont))
