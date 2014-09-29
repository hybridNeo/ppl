def adder(a):
	def add(b):
		return a+b
	return add
def main():
	a = adder(5)
	print(a(5))

if __name__ == "__main__":
	main()
