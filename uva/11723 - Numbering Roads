import sys, math
i=1
for line in sys.stdin:
	nums = []
	for word in line.split():
		nums.append(int(word))
	if(nums[0]==0 and nums[1]==0):
		break
	else:
		print("Case "+str(i)+": ",end="")
		if(nums[1]>nums[0]):
			print(0)
		elif(nums[0]>=nums[1]):
			res=nums[0]-nums[1]
			res2=res/nums[1]
			if(res2>26):
				print("impossible")
			else:
				print(math.ceil(res2))
	i+=1


