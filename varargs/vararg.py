sum=0
def foo(*args):
	global sum
	for i in args:
		sum+=i
	return sum/len(args)


print("avg of 2 2 2 2",foo(2,2,2,2))

